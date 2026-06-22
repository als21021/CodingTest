/*
문제 설명

어떤 도로에 차량 신호등이 n개 있습니다.
모든 신호등은 항상 초록불 → 노란불 → 빨간불 순서로 반복되며,
각 신호의 지속 시간은 신호등마다 다릅니다.
시간은 1초부터 시작하며,
각 신호등은 처음에는 초록불 상태로 시작합니다.
이 도로에서는 가끔 정전이 일어나는데,
모든 신호등이 모두 노란불이 되면 정전이 발생한다는 사실이 밝혀졌습니다.
예를 들어 신호등이 2개이고,
각 신호등의 주기가 다음과 같다고 가정해 보겠습니다.
신호등	초록불	노란불	빨간불
1번	2초	1초	2초
2번	5초	1초	1초

위 그림과 같이 13초에 처음으로 두 신호등이 모두 노란불이 됩니다.
신호등 n개의 신호 주기를 담은 2차원 정수 배열 signals가 매개변수로 주어집니다. 모든 신호등이 노란불이 되는 가장 빠른 시각(초)을 return 하도록 solution 함수를 완성해 주세요. 만약 모든 신호등이 노란불이 되는 경우가 존재하지 않는다면 -1을 return 해주세요.

제한사항
2 ≤ signals의 길이 = n ≤ 5
signals의 원소는 [G, Y, R] 형태의 길이가 3인 정수 배열입니다. 순서대로 초록불, 노란불, 빨간불의 지속 시간을 의미합니다.
1 ≤ G, Y, R ≤ 18
3 ≤ G + Y + R ≤ 20
*/

/*
풀이

y가 되는 시간
{g, y, r}
1 + g                           
1 + g + y + r + g
1 + g + y + r + g + y + r + g

{2, 1, 1}
3
3 + 4
3 + 4 + 4

y일 때 동안 boolean을 1로 바꾸게 하고
&&로 이어서 return 하는거지

1차원 리스트랑 현재 시간을 매개변수로 하는 함수 하나 만들기
bool isYellow(vector<int> color, int time)

시간을 우선 g + y + r로 나눈 나머지로 색 판단을 할거임

g < time % (g + y + r) <= g + y
이러면 현재 시간이 yellow 구간에 있는지 확인할 수 있음
저 조건을 만족하면 1을 아니면 0을 return


걍 귀찮은데 8천초까지 돌릴까{
    bool a = 1;

    signal : signals 로 반복시켜서{
        a && isYellow(signal)
    }
    if(a) return time;
}

return -1;
*/

#include <vector>
using namespace std;

//주황불 판별 함수
bool isYellow(vector<int> color, int time) {

    //불 사이클
    int cycle = color[0] + color[1] + color[2];

    //yellow에 있는지 확인하는 조건문
    if((color[0] < time % cycle) && (time % cycle <= color[0] + color[1])) return 1;
    else return 0;
}

int solution(vector<vector<int>> signals) {

    //1초부터 8,000초까지 확인할거임
    for(int time = 1; time <= 1000000; time++) {
        bool a = 1;

        //signal마다 확인
        for(vector<int> signal : signals) {
            a = a && isYellow(signal, time);
        }

        if(a) return time;
    }

    return -1;
}