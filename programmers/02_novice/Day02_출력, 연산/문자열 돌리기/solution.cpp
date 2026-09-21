/*
문제 설명
문자열 str이 주어집니다.
문자열을 시계방향으로 90도 돌려서 아래 입출력 예와 같이 출력하는 코드를 작성해 보세요.
*/

/*
제한사항
1 ≤ str의 길이 ≤ 10
*/

/*
풀이
문자열 반복문 돌려서 사이에 \n 넣으면 될듯
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    for(auto c : str) {
        cout << c << endl;
    }
}