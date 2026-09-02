/*
짝지어 제거하기

문제 설명

짝지어 제거하기는, 알파벳 소문자로 이루어진 문자열을 가지고 시작합니다.
먼저 문자열에서 같은 알파벳이 2개 붙어 있는 짝을 찾습니다.
그다음, 그 둘을 제거한 뒤, 앞뒤로 문자열을 이어 붙입니다.
이 과정을 반복해서 문자열을 모두 제거한다면 짝지어 제거하기가 종료됩니다.
문자열 S가 주어졌을 때, 짝지어 제거하기를 성공적으로 수행할 수 있는지 반환하는 함수를 완성해 주세요.
성공적으로 수행할 수 있으면 1을, 아닐 경우 0을 리턴해주면 됩니다.
예를 들어, 문자열 S = baabaa 라면
b aa baa → bb aa → aa →
의 순서로 문자열을 모두 제거할 수 있으므로 1을 반환합니다.

제한사항
문자열의 길이 : 1,000,000이하의 자연수
문자열은 모두 소문자로 이루어져 있습니다.
*/

/*
풀이

문자열의 길이만큼 수행하는데 짝지어 제거하기가 수행된다면 인덱스를 0으로 돌아가게 해서 계속 반복시키면 될 듯

그 후 반복문이 종료됐을 때 문자열의 길이가 0이면 1을 출력 0이 아니면 0을 출력

짝지어 제거하기는 s[i] == s[i+1] 이면 erase(s.begin() + i, 2)로 두 개 제거 후 i = 0
*/

/*
오답

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int solution(string s)
{

    for(int i = 0; i < s.length(); i++) {

        if(s[i] == s[i + 1]) {

            s.erase(i, 2);
            i = -1;
        }
    }

    return s.length() == 0 ? 1 : 0;
}

erase()는 제거한 후 뒤에 원소들을 앞으로 땡겨오면서 시간 복잡도가 늘어나서 효율성에서 오답 발생

또한 i < s.length() 는 int 와 size_t 비교이기 때문에 비교 부호 경고 뜨고
s[i + 1]은 마지막에 s[s.length()]에 접근해 좋지 않아 좋은 코드가 아님

stack으로 풀이하여 해결 할 수 있음
*/

/*
풀이

반복문을 돌려서 stack의 마지막 요소와 같으면 pop, 다르면 push를 해서 겹치는 두 개를 한 번에 없앨 수 있음
*/

#include <string>
using namespace std;

int solution(string s) {

    string stack;

    for(char c : s) {
        
        if(!stack.empty() && stack.back() == c) stack.pop_back();
        else stack.push_back(c);
    }

    return stack.empty() ? 1 : 0;
}