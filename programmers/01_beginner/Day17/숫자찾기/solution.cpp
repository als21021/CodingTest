/*
문제 설명
정수 num과 k가 매개변수로 주어질 때, num을 이루는 숫자 중에 k가 있으면 num의 그 숫자가 있는 자리 수를 return하고 없으면 -1을 return 하도록 solution 함수를 완성해보세요.
*/

/*
제한사항
0 < num < 1,000,000
0 ≤ k < 10
num에 k가 여러 개 있으면 가장 처음 나타나는 자리를 return 합니다.
*/

/*
풀이
이거 자리 수 배열로 넣을 방법 없나
없으면
*/

#include <string>
using namespace std;

int solution(int num, int k) {
    string charK = to_string(k);    string stringNum = to_string(num);
    for(int i = 0; i < stringNum.size(); i++) {
        if(stringNum[i] == charK[0])    return i + 1;
    }

    return -1;
}

/*
string의 find 함수를 활용하면 더 쉽게 찾을 수 있음

s.find(찾을 문자열, 시작 위치, 찾을 문자열의 길이);

ex)
string s = "Hello my name is metoday"

int non;
non = s.find("h");  //non == npos

cout << s.find("e");    //1
cout << s.find("e", 2); //12    2번째부터 찾기 시작하기 때문에 12번째에 있는 'e'를 찾음
cout << s.find("Myapple", 5, 2);    //6     Myapple 중 2개를 찾는거라 My를 찾음
*/