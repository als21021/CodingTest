/*
이진 변환 반복하기

문제 설명

0과 1로 이루어진 어떤 문자열 x에 대한 이진 변환을 다음과 같이 정의합니다.
x의 모든 0을 제거합니다.
x의 길이를 c라고 하면, x를 "c를 2진법으로 표현한 문자열"로 바꿉니다.
예를 들어, x = "0111010"이라면, x에 이진 변환을 가하면 x = "0111010" -> "1111" -> "100" 이 됩니다.
0과 1로 이루어진 문자열 s가 매개변수로 주어집니다. s가 "1"이 될 때까지 계속해서 s에 이진 변환을 가했을 때, 이진 변환의 횟수와 변환 과정에서 제거된 모든 0의 개수를 각각 배열에 담아 return 하도록 solution 함수를 완성해주세요.

제한사항
s의 길이는 1 이상 150,000 이하입니다.
s에는 '1'이 최소 하나 이상 포함되어 있습니다.
*/

/*
풀이

answer = {0, 0}으로 초기화 시켜놓고

일단 s == "1"이 될 때가지 while 문 돌리기

반복문 안에서 s를 돌리는 반복문을 하나 만들어야 함
for(char c : s)
c == '0'일 때 answer[1]++
c == '1'일 때 count++

반복문이 끝나면 count를 2진수로 변환
while(count < 2) {
    count % 2 == 0, 0
    else, 1
    count /= 2
}

s = count

answer[0]++
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer = {0, 0};

    while(s != "1") {

        int count = 0;
        string x;
        for(char c : s) {
            if(c == '0') answer[1]++;
            else count++;
        }

        while(count > 1) {
            if(count % 2) x = '1' + x;
            else x = '0' + x;
            count /= 2;
        }

        s = '1' + x;
        answer[0]++;
    }

    return answer;
}