/*
문제 설명
양의 정수 n이 매개변수로 주어질 때,
n이 홀수라면 n 이하의 홀수인 모든 양의 정수의 합을 return 하고
n이 짝수라면 n 이하의 짝수인 모든 양의 정수의 제곱의 합을 return 하는 solution 함수를 작성해 주세요.
*/

/*
제한사항
1 ≤ n ≤ 100
*/

/*
풀이
n % 2 == 0 이면,
for(int i = n; i >= 2; i -= 2) 반복해서
제곱 함수가 뭐더라 pow였나
answer += pow(i);
pow 아닌거 같은데

n % 2 != 0 이면,
for(int i = n; i >= 1; i -= 2) 반복해서
answer += i;
*/

#include <cmath>
using namespace std;

int solution(int n) {

    int answer = 0;

    if(n % 2 == 0) {
        
        for(int i = n; i >= 2; i -= 2) {

            answer += pow(i, 2);
        }
    }
    else {

        for(int i = n; i >= 1; i -= 2) {

            answer += i;
        }
    }

    return answer;
}