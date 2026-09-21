/*
짝수와 홀수

문제 설명

정수 num이 짝수일 경우 "Even"을 반환하고 홀수인 경우 "Odd"를 반환하는 함수, solution을 완성해주세요.
제한 조건
num은 int 범위의 정수입니다.
0은 짝수입니다.
*/

#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    if(num % 2) return "Odd";
    else return "Even";
}

/*
return num & 1 ? "Odd" : "Even";

num이 홀수면 이진수 끝 자리에 1이 오므로 num & 1 은 1이 되므로 Odd
num이 짝수면 이진수 끝 자리에 0이 오므로 num & 1 은 0이 되므로 Even
*/