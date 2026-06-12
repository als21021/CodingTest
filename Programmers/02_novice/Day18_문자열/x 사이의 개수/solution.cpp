//x 사이의 개수

/*
문제 설명

문자열 myString이 주어집니다.
myString을 문자 "x"를 기준으로 나눴을 때 나눠진 문자열 각각의 길이를 순서대로 저장한 배열을 return 하는 solution 함수를 완성해 주세요.
*/

/*
제한사항
1 ≤ myString의 길이 ≤ 100,000
myString은 알파벳 소문자로 이루어진 문자열입니다.
*/

/*
풀이
find('x')를 했을 때 나온 값 - 이전 find('x') 값 - 1
beforeX, afterX 만들어서 저장하고 이 값 넣어서 find 게속 하면 될 듯
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    size_t start = 0, pos;

    while((pos = myString.find('x', start)) != string::npos) {
        answer.push_back(pos - start);
        start = pos + 1;
    }

    return answer;
}