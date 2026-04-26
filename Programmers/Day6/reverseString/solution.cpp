/*
문제 설명
문자열 my_string이 매개변수로 주어집니다. my_string을 거꾸로 뒤집은 문자열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ my_string의 길이 ≤ 1,000
*/

/*
풀이
저번에 배열 뒤집은 것처럼 문자열도 뒤집으면 될듯
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {

    string answer = "";
    for(int i = 0; i < my_string.size(); i++) {
        answer += my_string[my_string.size() - 1 - i];
    }
    return answer;
}

int main() {
    string my_string = "abcd";
    cout << solution(my_string);
}

/*
String 쓰는 법이 아직 숙지가 안되어있음

그리고 왠지 모르겠는데 어제 썼던 algorithm 헤더가 안됨
내일 공부 해봐야할듯
*/

/*
solution은 메모리에 접근하니까 거기에 하나씩 더하면 문자열 되는건가?
잘 모루겟당
*/