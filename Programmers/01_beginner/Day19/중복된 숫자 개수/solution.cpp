/*
문제 설명
정수가 담긴 배열 array와 정수 n이 매개변수로 주어질 때, array에 n이 몇 개 있는 지를 return 하도록 solution 함수를 완성해보세요.
*/

/*
제한사항
1 ≤ array의 길이 ≤ 100
0 ≤ array의 원소 ≤ 1,000
0 ≤ n ≤ 1,000
*/

/*
풀이
얘는 진짜 반복문 돌려서 i == n count++
하면 되는거 아님?
*/

#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;

    for(auto i : array) {
        if(i == n)  answer++;
    }

    return answer;
}

/*
algorithm의 count 함수 공부
범위 안의 원소들 중 특정 값과 일치하거나(count) 특정 조건과 일치하면(count_if) 개수를 센다
count(a.begin(), a.end(), n)
a의 처음부터 끝까지 n이 있는 개수를 리턴
어렵네 나중에 더 공부하자
*/