/*
문제 설명
문자열 my_string과 문자 letter이 매개변수로 주어집니다. my_string에서 letter를 제거한 문자열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ my_string의 길이 ≤ 100
letter은 길이가 1인 영문자입니다.
my_string과 letter은 알파벳 대소문자로 이루어져 있습니다.
대문자와 소문자를 구분합니다.
*/

/*
풀이
문자열의 처음부터 쭉 훑으면서 letter와 같을 경우 지우는 알고리즘
ㄴㄴ 새로 문자열을 만들고 my_string을 추가하는데 letter와 같으면 추가 안하게
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for(int i = 0; i < my_string.size(); i++) {
        if(my_string[i] == letter[0]) {
            continue;
        }
        answer += my_string[i];
    }
    return answer;
}

/*
string에 대한 이해가 필요함
*/