/*
문제 설명
길이가 같은 두 문자열 str1과 str2가 주어집니다.

두 문자열의 각 문자가 앞에서부터 서로 번갈아가면서 한 번씩 등장하는 문자열을 만들어 return 하는 solution 함수를 완성해 주세요.
*/

/*
제한사항
1 ≤ str1의 길이 = str2의 길이 ≤ 10
str1과 str2는 알파벳 소문자로 이루어진 문자열입니다.
*/

#include <string>
using namespace std;

string solution(string str1, string str2) {
    string answer;
    for(int i = 0; i < str1.size(); i++) {
        answer.push_back(str1[i]);
        answer.push_back(str2[i]);
    }
    return answer;
}