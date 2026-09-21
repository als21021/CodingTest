/*
문제 설명

양의 정수 n이 매개변수로 주어집니다.
n × n 배열에 1부터 n2 까지 정수를 인덱스 [0][0]부터 시계방향 나선형으로 배치한 이차원 배열을 return 하는 solution 함수를 작성해 주세요.

제한사항
1 ≤ n ≤ 30
*/

/*
풀이
0까지 x값 감소, n까지 y값 증가, n까지 x값 증가, 1까지 y값 감소

1까지 x값 감소, n-1까지 y값 증가, n-1까지 x값 증가, 1까지 y값 감소

.
.
.

끝나는 시점 잡아야 하는데
짝수면 n/2 까지
홀수면 n/2 까지
*/

#include <vector>
using namespace std;

vector<vector<int>> solution(int n) {

    vector<vector<int>> answer(n, vector<int> (n));
    int value = 1;

    for(int i = 0; i < n / 2; i++) {

        for(int j = i; j < n - i; j++) answer[i][j] = value++;

        for(int j = i + 1; j < n - i; j++) answer[j][n-1-i] = value++;
    }
    return answer;
}