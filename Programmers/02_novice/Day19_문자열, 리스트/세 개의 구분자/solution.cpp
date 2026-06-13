//세 개의 구분자

/*
문제 설명

임의의 문자열이 주어졌을 때 문자 "a", "b", "c"를 구분자로 사용해 문자열을 나누고자 합니다.
예를 들어 주어진 문자열이 "baconlettucetomato"라면 나눠진 문자열 목록은 ["onlettu", "etom", "to"] 가 됩니다.
문자열 myStr이 주어졌을 때 위 예시와 같이 "a", "b", "c"를 사용해 나눠진 문자열을 순서대로 저장한 배열을 return 하는 solution 함수를 완성해 주세요.
단, 두 구분자 사이에 다른 문자가 없을 경우에는 아무것도 저장하지 않으며, return할 배열이 빈 배열이라면 ["EMPTY"]를 return 합니다.
*/

/*
제한사항
1 ≤ myStr의 길이 ≤ 1,000,000
myStr은 알파벳 소문자로 이루어진 문자열 입니다.
*/

/*
풀이
a, b, c가 나오기 전까지 새 문자열 변수에다가 문자를 누적시켜 놓다가 a, b, c가 나오면 answer 백터에 push_back
*/

#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string a;

    for(char c : myStr) {
        if(c == 'a' || c == 'b' || c == 'c') {
            if(a != "") answer.push_back(a);
            a = "";  
        } else {
            a += c;
        }
    }

    if(a != "") answer.push_back(a);
    if(answer.empty()) return {"EMPTY"};
    return answer;
}