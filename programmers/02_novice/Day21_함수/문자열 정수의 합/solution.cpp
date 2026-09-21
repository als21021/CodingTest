/*
문제 설명

한 자리 정수로 이루어진 문자열 num_str이 주어질 때,
각 자리수의 합을 return하도록 solution 함수를 완성해주세요.

제한사항
3 ≤ num_str ≤ 100
*/

#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    for(char num : num_str) {
        answer += num - '0';
    }
    return answer;
}