/*
문제 설명
문자열 my_string이 매개변수로 주어집니다. my_string안의 모든 자연수들의 합을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ my_string의 길이 ≤ 1,000
my_string은 소문자, 대문자 그리고 한자리 자연수로만 구성되어있습니다.
*/

/*
풀이
이것도 아스키코드로 숫자일 때만 정답에 더해주면 됨
*/

#include <string>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(auto c : my_string) {
        if(c >= 48 && c <= 57)  answer += c - 48;
    }
    return answer;
}

/*
auto
컴파일러가 초기화 식을 기반으로 자료형을 추론하게 하는 기능
*/