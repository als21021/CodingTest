/*
문제 설명
영어에선 a, e, i, o, u 다섯 가지 알파벳을 모음으로 분류합니다. 문자열 my_string이 매개변수로 주어질 때 모음을 제거한 문자열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
my_string은 소문자와 공백으로 이루어져 있습니다.
1 ≤ my_string의 길이 ≤ 1,000
*/

/*
내 오답

#include <string>

using namespace std;

string solution(string my_string) {
    for(int i = 0; i < my_string.size(); i++) {
        if((my_string.at(i) == 'a')||(my_string.at(i) == 'e')||(my_string.at(i) == 'i')||(my_string.at(i) == 'o')||(my_string.at(i) == 'u')) {
            for(int j = i; j < my_string.size(); j++) {
                my_string[j] = my_string[j+1];
                my_string.pop_back();
            }
        }
    }

    return my_string;
}

틀린 이유
'a'를 지우고 땡겨와도 i++는 그대로 진행되기 때문에 땡겨온 문자는 검사하지 못함
pop_back을 계속하게 되면 문자열의 길이가 실시간으로 변해 의도치 않은 위치의 문자가 사라지거나 범위에서 벗어날 수 있음
*/

#include <string>

using namespace std;

string solution(string my_string) {
    string answer;
    for(int i = 0; i < my_string.length(); i++) {
        if(!((my_string[i]=='a')||(my_string[i]=='e')||(my_string[i]=='i')||(my_string[i]=='o')||(my_string[i]=='u'))) {
            answer.push_back(my_string[i]);
        }
    }
    return answer;
}