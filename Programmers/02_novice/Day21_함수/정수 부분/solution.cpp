/*
문제 설명

실수 flo가 매개 변수로 주어질 때, flo의 정수 부분을 return하도록 solution 함수를 완성해주세요.

제한사항
0 ≤ flo ≤ 100
*/

#include <string>
#include <vector>

using namespace std;

int solution(double flo) {
    string floflo = to_string(flo);
    string answer;

    for(char c : floflo) {
        if(c == '.') break;
        answer += c;
    }
    return stoi(answer);
}