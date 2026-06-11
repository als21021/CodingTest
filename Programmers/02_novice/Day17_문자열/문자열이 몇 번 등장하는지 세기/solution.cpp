/*
문제 설명

문자열 myString과 pat이 주어집니다.
myString에서 pat이 등장하는 횟수를 return 하는 solution 함수를 완성해 주세요.
*/

/*
제한사항
1 ≤ myString ≤ 1000
1 ≤ pat ≤ 10
*/

/*
풀이
myString.find(pat) != string::npos 면 answer++ 하면 됨
그리고 다음 인덱스로 옮겨가야 하는데
*/

#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;

    int i = 0;
    while(i < myString.size()) {
        if(myString.find(pat, i) != string::npos) {
            answer++;
            i = myString.find(pat, i) + 1;
        } else break;
    }
    return answer;
}