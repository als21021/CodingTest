/*
문제 설명
정수 l과 r이 주어졌을 때,
l 이상 r이하의 정수 중에서 숫자 "0"과 "5"로만 이루어진 모든 정수를
오름차순으로 저장한 배열을 return 하는 solution 함수를 완성해 주세요.

만약 그러한 정수가 없다면, -1이 담긴 배열을 return 합니다.
*/

/*
제한사항
1 ≤ l ≤ r ≤ 1,000,000
*/

/*
풀이
반복문을 l부터 r까지 돌려
안에서 i를 string으로 바꾸고 거기에 '0'이나 '5'가 있다면 answer 배열에 추가
answer가 비어있다면 -1 추가
*/

#include <string>
#include <vector>
using namespace std;

vector<int> solution(int l, int r) {

    vector<int> answer;

    for(int i = l; i <= r; i++) {

        int n = 0;
        for(auto c : to_string(i)) {

            if(c != '0' && c != '5') n++;
        }
        
        if(n == 0) answer.push_back(i);
    }

    if(answer.empty()) answer.push_back(-1);

    return answer;
}