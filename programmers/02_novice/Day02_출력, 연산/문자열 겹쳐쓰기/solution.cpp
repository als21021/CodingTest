/*
문제 설명
문자열 my_string, overwrite_string과 정수 s가 주어집니다. 문자열 my_string의 인덱스 s부터 overwrite_string의 길이만큼을 문자열 overwrite_string으로 바꾼 문자열을 return 하는 solution 함수를 작성해 주세요.
*/

/*
제한사항
my_string와 overwrite_string은 숫자와 알파벳으로 이루어져 있습니다.
1 ≤ overwrite_string의 길이 ≤ my_string의 길이 ≤ 1,000
0 ≤ s ≤ my_string의 길이 - overwrite_string의 길이
*/

/*
그니가 my_string을 인덱스 s까지만 출력하고
나머지는 overwirte_string으로 출력하라는거임?
*/

#include <iostream>
#include <string>
using namespace std;

string solution(string my_string, string overwrite_string, int n) {
    string answer;
    for(int i = 0; i < n; i++) {
        answer += my_string[i];
    }
    answer += overwrite_string;

    for(int i = n + overwrite_string.size(); i < my_string.size(); i++) {
        answer += my_string[i];
    }
    
    return answer;
}

/*
다른 풀이
string에 replace 함수를 활용
answer = my_string.replace(s, overwrite_string.size(), overwrite_string);
replace(a, b, c);
a == 시작 지점의 인덱스
b == 대체할 길이
c == 대체할 문자
*/