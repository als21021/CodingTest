/*
문제 설명

문자열 리스트 str_list에는 "u", "d", "l", "r" 네 개의 문자열이 여러 개 저장되어 있습니다. str_list에서 "l"과 "r" 중 먼저 나오는 문자열이 "l"이라면 해당 문자열을 기준으로 왼쪽에 있는 문자열들을 순서대로 담은 리스트를, 먼저 나오는 문자열이 "r"이라면 해당 문자열을 기준으로 오른쪽에 있는 문자열들을 순서대로 담은 리스트를 return하도록 solution 함수를 완성해주세요. "l"이나 "r"이 없다면 빈 리스트를 return합니다.
*/

/*
제한사항
1 ≤ str_list의 길이 ≤ 20
str_list는 "u", "d", "l", "r" 네 개의 문자열로 이루어져 있습니다.
*/

/*
풀이
인덱스 있는 반복문으로 돌려야 할 듯 돌리다 l 나오면 0부터 i-1까지 출력
r 나오면 i+1부터 끝까지 출력
반복문 밖애다가 빈 배열 출력
*/

#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    for(int i = 0; i < str_list.size(); i++) {
        if(str_list[i] == "l") {
            vector<string> left(str_list.begin(), str_list.begin() + i);
            return left;
        }
        if(str_list[i] == "r") {
            vector<string> right(str_list.begin() + i + 1, str_list.end());
            return right;
        }
    }

    return {};
}