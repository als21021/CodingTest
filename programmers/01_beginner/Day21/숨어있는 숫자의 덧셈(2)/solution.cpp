/*
문제 설명
문자열 my_string이 매개변수로 주어집니다. my_string은 소문자, 대문자, 자연수로만 구성되어있습니다.
my_string안의 자연수들의 합을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ my_string의 길이 ≤ 1,000
1 ≤ my_string 안의 자연수 ≤ 1000
연속된 수는 하나의 숫자로 간주합니다.
000123과 같이 0이 선행하는 경우는 없습니다.
문자열에 자연수가 없는 경우 0을 return 해주세요.
*/

/*
내 풀이
#include <string>
#include <vector>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    int myNumber = 0;
    char c;

    for(char c : my_string) {   //my_string 반복
        if((c >= '0') && (c <= '9')) {     //아스키코드로 c가 숫자인지 판별
            myNumber = myNumber * 10 + int(c) - 48;
        } else {
            answer += myNumber;
            myNumber = 0;
        }
    }

    answer += myNumber;

    return answer;
}
*/

/*
다른 풀이
cctype에 isdigit() 함수를 사용하면
문자가 숫자인지 쉽게 확인할 수 있음
문자가 '0' - '9' 사이일 때 0이 아닌 값을 반환

문자열 중 숫자가 아닌 값을 ' ' 빈칸으로 바꿔버리고
stringstream을 활용해 쉽게 숫자들만 뽑아낼 수 있음
*/

#include <cctype>
#include <sstream>
#include <string>
using namespace std;

int solution(string my_string) {
    int answer = 0;

    for(char& c : my_string) {
        if(!isdigit(c)) c = ' ';
    }

    stringstream ss(my_string);
    int number;
    while(ss >> number) {
        answer += number;
    }

    return answer;
}