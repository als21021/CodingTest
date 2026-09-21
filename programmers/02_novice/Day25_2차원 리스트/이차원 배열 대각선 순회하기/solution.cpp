/*
문제 설명

2차원 정수 배열 board와 정수 k가 주어집니다.
i + j <= k를 만족하는 모든 (i, j)에 대한 board[i][j]의 합을 return 하는 solution 함수를 완성해 주세요.

제한사항
1 ≤ board의 길이 ≤ 100
1 ≤ board[i]의 길이 ≤ 100
1 ≤ board[i][j] ≤ 10,000
모든 board[i]의 길이는 같습니다.
0 ≤ k < board의 길이 + board[i]의 길이
*/

/*
풀이
i를 0부터 끝까지 반복
그 안에 j를 0부터 끝까지 반복

if(i + j <= k)면 answer += board[i][j];


*/

#include <vector>
using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;

    for(int i = 0; i < board.size(); i++) {
        for(int j = 0; j < board[0].size(); j++) {

            if(i + j <= k) answer += board[i][j];
        }
    }

    return answer;
}