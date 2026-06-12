//간단한 식 계산하기

/*
문제 설명

문자열 binomial이 매개변수로 주어집니다.
binomial은 "a op b" 형태의 이항식이고 a와 b는 음이 아닌 정수, op는 '+', '-', '*' 중 하나입니다.
주어진 식을 계산한 정수를 return 하는 solution 함수를 작성해 주세요.
*/

/*
제한사항
0 ≤ a, b ≤ 40,000
0을 제외하고 a, b는 0으로 시작하지 않습니다.
*/

/*
풀이
stringstream으로 빈칸을 기준으로 나누기
answer = a;
해놓고 ss >> op >> b
계속 하면 될 듯
*/

#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string binomial) {

    istringstream ss(binomial);
    int a, b;
    char op;

    ss >> a;
    int answer = a;

    while(ss >> op >> b) {
        if(op == '+') answer += b;
        else if(op == '-') answer -= b;
        else answer *= b;
    }

    return answer;
}