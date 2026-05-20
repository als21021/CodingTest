/*
문제 설명
문자열 배열 strlist가 매개변수로 주어집니다. strlist 각 원소의 길이를 담은 배열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ strlist 원소의 길이 ≤ 100
strlist는 알파벳 소문자, 대문자, 특수문자로 구성되어 있습니다.
*/

/*
풀이
0-strlist.size() 반복문 돌리기
strlist[i].length 하면 원소 길이 나오려나
*/

#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;

    for(int i = 0; i < strlist.size(); i++) {
        answer.push_back(strlist[i].length());
    }

    return answer;
}

/*
for(auto str : strlist) {
    answer.push_back(str.length());
}
*/