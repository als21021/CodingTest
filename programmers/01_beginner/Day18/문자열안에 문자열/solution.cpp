/*
문제 설명
문자열 str1, str2가 매개변수로 주어집니다. str1 안에 str2가 있다면 1을 없다면 2를 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ str1의 길이 ≤ 100
1 ≤ str2의 길이 ≤ 100
문자열은 알파벳 대문자, 소문자, 숫자로 구성되어 있습니다.
*/

/*
풀이
string에 find 함수를 활용
근데 쓸 줄 모름
*/

/*
첫 오답
이렇게 쓰는거 아닌가봄
#include <string>
using namespace std;

int solution(string str1, string str2) {
    if(str1.find(str2)) return 1;
    else return 2;
}
*/

#include <string>
using namespace std;

int solution(string str1, string str2) {
    if(str1.find(str2) != string::npos) return 1;
    else return 2;
}

/*
찾는 문자가 없는 경우에 string::npos를 리턴
npos == no position 쓰레기 값임
찾는 문자가 있을 경우 찾는 문자의 첫번째 인덱스 값을 리턴
쉽죠?
*/