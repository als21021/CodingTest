/*
문제 설명
이진수를 의미하는 두 개의 문자열 bin1과 bin2가 매개변수로 주어질 때, 두 이진수의 합을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
return 값은 이진수를 의미하는 문자열입니다.
1 ≤ bin1, bin2의 길이 ≤ 10
bin1과 bin2는 0과 1로만 이루어져 있습니다.
bin1과 bin2는 "0"을 제외하고 0으로 시작하지 않습니다.
*/

/*
풀이
bin1, bin2 외에 자리수 올라가는 배열 bin3까지 만들어서 세개 더해가면 될 듯
세개 다 숫자로 바꿔서 더한 다음에 0이면 answer 같은 인덱스에 0, 1이면 같은 인덱스에 1, 2면 같은 인덱스에 0하고 bin3 i-1에 1, 3이면 1, 1

근데 bin1과 bin2의 길이가 다르면 어캄 뒤에서부터 더해야하는데
일단 같다는 가정하에 문제 풀어볼까

그러면 stoi로 통째로 숫자로 바꾼 다음에 더하는게 나을듯
그러면 자리올림 변수도 필요 없음
*/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string bin1, string bin2) {
    
    //bin1과 bin2를 더한 10진수 정수 변수 생성
    int a = stoi(bin1, nullptr, 2) + stoi(bin2, nullptr, 2);

    cout << a;

    string answer = "";
    //10진수 정수를 다시 2진수로 바꿔줄거임
    if(a == 0)   return "0";
    while(a > 0) {
        answer = char('0' + (a % 2)) + answer;
        a /= 2;
    }

    return answer;
}

/*
아니 2진수 문자열을 숫자로 바꿔주는 함수가 있다고?
레전드
stoi(string, pos, base);
string은 바꿀 문자열
pos는 저장할 포인터(없으면 nullptr)
base는 진법(기본값 10)
*/