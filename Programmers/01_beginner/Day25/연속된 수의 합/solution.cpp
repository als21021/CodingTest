/*
문제 설명
연속된 세 개의 정수를 더해 12가 되는 경우는 3, 4, 5입니다.
두 정수 num과 total이 주어집니다.
연속된 수 num개를 더한 값이 total이 될 때,
정수 배열을 오름차순으로 담아 return하도록 solution함수를 완성해보세요.
*/

/*
제한사항
1 ≤ num ≤ 100
0 ≤ total ≤ 1000
num개의 연속된 수를 더하여 total이 될 수 없는 테스트 케이스는 없습니다.
*/

/*
풀이
total을 만들 수 있는 수의 개수가 num개면
그 원소들의 평균은 total / num임

짝수 홀수일 때를 다르게 가야하나

홀수일 때
answer[0] = (total / num) - ((num - 1) / 2)
for(int i = 1; i < num; i++) {
    answer.push_back(answer[0] + i)
}
하면서 num개 될 때까지 쭉 더해주면 될 듯

짝수일 때
answer[0] = ((total / num) + 1) - (num / 2)
이하 동일
*/

#include <vector>
using namespace std;

vector<int> solution(int num, int total) {

    vector<int> answer;

    if(num % 2 == 0) {
        answer.push_back(((total / num) + 1) - (num / 2));
    } else {
        answer.push_back((total / num) - ((num - 1) / 2));
    }

    for(int i = 1; i < num; i++) {
        answer.push_back(answer[0] + i);
    }

    return answer;
}