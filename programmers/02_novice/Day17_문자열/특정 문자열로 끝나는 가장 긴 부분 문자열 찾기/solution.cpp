/*
문제 설명

문자열 myString과 pat가 주어집니다.
myString의 부분 문자열중 pat로 끝나는 가장 긴 부분 문자열을 찾아서 return 하는 solution 함수를 완성해 주세요.
*/

/*
제한사항
5 ≤ myString ≤ 20
1 ≤ pat ≤ 5
pat은 반드시 myString의 부분 문자열로 주어집니다.
myString과 pat에 등장하는 알파벳은 대문자와 소문자를 구분합니다.
*/

/*
풀이
부분 문자열 검색에서는 std::find()를 사용할 수 없음
string::find()를 사용하면 인덱스로 바로 변환 가능
인덱스를 담을 변수를 하나 만들어서 맨 뒤로 갈 때까지 반복해서
index = myString.find(pat, index + 1)를 하면 pat이 없어질 수도 있으니까
index != string::npos 때까지 반복하면 될 듯
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string myString, string pat) {
    size_t index = 0;
    while(1) {
        if(myString.find(pat, index + 1) != string::npos) {
            index = myString.find(pat, index + 1);
            cout << index << endl;
        } else break;
    }
    
    string answer(myString.begin(), myString.begin() + index + pat.size());
    return answer;
}

/*
rfind()
뒤에서부터 탐색하는 함수
*/