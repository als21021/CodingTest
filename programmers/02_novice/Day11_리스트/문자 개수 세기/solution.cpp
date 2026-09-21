/*
문제 설명

알파벳 대소문자로만 이루어진 문자열 my_string이 주어질 때,
my_string에서 'A'의 개수,
my_string에서 'B'의 개수,...,
my_string에서 'Z'의 개수,
my_string에서 'a'의 개수, my_string에서 'b'의 개수,...,
my_string에서 'z'의 개수를 순서대로 담은 길이 52의 정수 배열을 return 하는 solution 함수를 작성해 주세요.
*/

/*
제한사항
1 ≤ my_string의 길이 ≤ 1,000
*/

/*
풀이
아스키 코드로 풀거임 for문 돌리고
정수 배열[char c - 62]++
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52);

    for(auto c : my_string) {
        if(isupper(c)) answer[c - 65]++;
        else answer[c - 71]++;
    }
    return answer;
}