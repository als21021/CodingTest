/*
문제 설명
my_string은 "3 + 5"처럼 문자열로 된 수식입니다. 문자열 my_string이 매개변수로 주어질 때, 수식을 계산한 값을 return 하는 solution 함수를 완성해주세요.
*/

/*
제한사항
연산자는 +, -만 존재합니다.
문자열의 시작과 끝에는 공백이 없습니다.
0으로 시작하는 숫자는 주어지지 않습니다.
잘못된 수식은 주어지지 않습니다.
5 ≤ my_string의 길이 ≤ 100
my_string을 계산한 결과값은 1 이상 100,000 이하입니다.
my_string의 중간 계산 값은 -100,000 이상 100,000 이하입니다.
계산에 사용하는 숫자는 1 이상 20,000 이하인 자연수입니다.
my_string에는 연산자가 적어도 하나 포함되어 있습니다.
return type 은 정수형입니다.
my_string의 숫자와 연산자는 공백 하나로 구분되어 있습니다.
*/

/*
풀이
문자열을 공백 기준으로 나누는 기술을 난 모름
c++의 stringstream을 활용하면 나눌 수 있음

#include <sstream>

이후

stringstream ss(my_string);
을 선언하면 문자열을 공백 단위로 쪼개서 가져올 수 있는 스트림이 생성됨

ss >> op
ss >> num
을 통해 연산자와 숫자를 반복해서 읽어줄거임

연산자를 읽은 후 숫자를 더해주는 게 편하기 때문에 맨 앞의 숫자를 반복문 밖에서
초기화 해놓는게 편할거임
*/

#include <string>
#include <sstream>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    stringstream ss(my_string);

    int num;
    char op;

    ss >> answer;

    while(ss >> op >> num) {
        if(op == '+') answer += num;
        else    answer -= num;
    }
    return answer;
}