/*
피보나치 수

문제 설명

피보나치 수는 F(0) = 0, F(1) = 1일 때, 1 이상의 n에 대하여 F(n) = F(n-1) + F(n-2) 가 적용되는 수 입니다.
예를들어
F(2) = F(0) + F(1) = 0 + 1 = 1
F(3) = F(1) + F(2) = 1 + 1 = 2
F(4) = F(2) + F(3) = 1 + 2 = 3
F(5) = F(3) + F(4) = 2 + 3 = 5
와 같이 이어집니다.
2 이상의 n이 입력되었을 때, n번째 피보나치 수를 1234567으로 나눈 나머지를 리턴하는 함수, solution을 완성해 주세요.

제한 사항
n은 2 이상 100,000 이하인 자연수입니다.
*/

/*
풀이
f(n)을 구하는 함수부터 만들어야 함

int fibonacci(int n) {

    if(n == 0) return 0;
    else if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

*/

/*
오답

#include <string>
#include <vector>
using namespace std;

int fibonacci(int n) {

    if(n == 0) return 0;
    else if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int solution(int n) {
    int answer = 0;
    return fibonacci(n) % 1234567;
}

런타임 에러 남 함수를 계속 호출하면서 n이 커지면 너무 오래 걸리는 듯
*/

/*
풀이

반복문으로 풀어야 한다는데

f(2) = (f(0) + f(1))
f(3) = f(1) + f(2) = f(1) + (f(0) + f(1))
f(4) = f(2) + f(3) = (f(0) + f(1)) + (f(1) + f(0) + f(1))
f(5) = f(3) + f(4) = (f(1) + f(0) + f(1)) + (f(0) + f(1) + f(1) + f(0) + f(1))

변수 세 개 만들어서 전에꺼 전전에꺼 지금꺼 저장시켜놓고
다시 저장해가면서 만들어야 할 듯


*/

#include <iostream>
using namespace std;

int solution(int n) {

    int bbn = 0;
    int bn = 1;
    int temp;
    int nn = 1;

    for(int i = 2; i <= n; i++) {

        nn = ((bbn % 1234567) + (bn % 1234567)) % 1234567;
        bbn = bn % 1234567;
        bn = nn % 1234567;
    }

    return nn;
}

/*
마지막에 나머지 연산을 하게 되면 범위를 벗어나게 됨
미리 해두면 좋음
*/