/*
숫자 문자열과 영단어

문제 설명

네오와 프로도가 숫자놀이를 하고 있습니다. 네오가 프로도에게 숫자를 건넬 때 일부 자릿수를 영단어로 바꾼 카드를 건네주면 프로도는 원래 숫자를 찾는 게임입니다.

다음은 숫자의 일부 자릿수를 영단어로 바꾸는 예시입니다.
1478 → "one4seveneight"
234567 → "23four5six7"
10203 → "1zerotwozero3"
이렇게 숫자의 일부 자릿수가 영단어로 바뀌어졌거나, 혹은 바뀌지 않고 그대로인 문자열 s가 매개변수로 주어집니다. s가 의미하는 원래 숫자를 return 하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string answer;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= '0' && s[i] <= '9') answer += s[i];
        else {

            if(s[i] == 'z') {answer += '0'; i += 3;}
            else if(s[i] == 'o') {answer += '1'; i += 2;}
            else if(s[i] == 't') {
                if(s[i+1] == 'w') {answer += '2'; i += 2;}
                else {answer += '3'; i += 4;}
            } else if(s[i] == 'f') {
                if(s[i+1] == 'o') {answer += '4'; i += 3;}
                else {answer += '5'; i += 3;}
            } else if(s[i] == 's') {
                if(s[i+1] == 'i') {answer += '6'; i += 2;}
                else {answer += '7'; i += 4;}
            } else if(s[i] == 'e') {answer += '8'; i += 4;}
            else {answer += '9'; i += 3;}
        }
    }
    return stoi(answer);
}

/*
regex
정규표현식

문자열을 검색하거나 대체하는 데 사용되는 패턴

이걸 알고 있으면 더 수월하게 풀 수 있음
*/