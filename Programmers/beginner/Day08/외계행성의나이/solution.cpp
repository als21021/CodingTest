/*
문제 설명
우주여행을 하던 머쓱이는 엔진 고장으로 PROGRAMMERS-962 행성에 불시착하게 됐습니다. 입국심사에서 나이를 말해야 하는데, PROGRAMMERS-962 행성에서는 나이를 알파벳으로 말하고 있습니다. a는 0, b는 1, c는 2, ..., j는 9입니다. 예를 들어 23살은 cd, 51살은 fb로 표현합니다. 나이 age가 매개변수로 주어질 때 PROGRAMMER-962식 나이를 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
age는 자연수입니다.
age ≤ 1,000
PROGRAMMERS-962 행성은 알파벳 소문자만 사용합니다.
*/

/*
풀이
형변환을 통해 문자로 바꿔주면 될듯
숫자도 각 자리수 나눠서 하나씩 따고
*/

#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    if(age == 1000) {
        answer = "baaa";
    }else if(age >= 100) {
        answer.push_back((age / 100) + 97);
        answer.push_back(((age % 100) / 10) + 97);
        answer.push_back((age % 10) + 97);
    }else if(age >= 10) {
        answer.push_back((age / 10) + 97);
        answer.push_back((age % 10) + 97);
    }else {
        answer.push_back(age + 97);
    }

    return answer;
}