/*
문제 설명
지뢰가 있는 지역과 지뢰에 인접한 위, 아래, 좌, 우 대각선 칸을 모두 위험지역으로 분류합니다.
지뢰는 2차원 배열 board에 1로 표시되어 있고 board에는 지뢰가 매설 된 지역 1과, 지뢰가 없는 지역 0만 존재합니다.
지뢰가 매설된 지역의 지도 board가 매개변수로 주어질 때, 안전한 지역의 칸 수를 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
board는 n * n 배열입니다.
1 ≤ n ≤ 100
지뢰는 1로 표시되어 있습니다.
board에는 지뢰가 있는 지역 1과 지뢰가 없는 지역 0만 존재합니다.
*/

/*
풀이
이중반복문으로 인덱스 두 개 만들고
원소가 1인곳에서 인덱스 [i-1][j-1] 부터 [i+1][j+1]까지 전부 원소 1로 바꾸고
다시 반복문 돌려서 원소 0일 때마다 answer++
*/

/*
내 오답
인덱스의 범위를 벗어나버림
연쇄 폭발이 일어남

#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int>> board) {
    vector<int> answer = 0;

    for(int i = 0; i < board.size(); i++) {
        for(int j = 0; j < board.size(); j++) {
            if(board[i][j] == 1) {
                board.at(i-1).at(j-1) = 1;
                board.at(i-1).at(j) = 1;
                board.at(i-1).at(j+1) = 1;
                board.at(i).at(j-1) = 1;
                board.at(i).at(j+1) = 1;
                board.at(i+1).at(j-1) = 1;
                board.at(i+1).at(j) = 1;
                board.at(i+1).at(j+1) = 1;
            }
        }
    }

    for(auto i : board) {
        for(auto j : i) {
            if(j == 0)  answer++;
        }
    }
    return answer;
}
*/

#include <vector>
using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    //연쇄 폭발을 막기 위해 배열을 새로 생성
    vector<vector<int>> checkBoard = board;

    //탐색 때 좌표 이동을 쉽게 하기 위한 배열
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    //보드 탐색 반복문
    for(int x = 0; x < board.size(); x++) {
        for(int y = 0; y < board.size(); y++) {

            //지뢰가 있다면
            if(board[x][y] == 1) {

                //인덱스와 좌표 이동을 계산해줄 변수가 새로 필요할듯
                int nx;
                int ny;

                //8방향으로 이동
                for(int i = 0; i < 8; i++) {
                    nx = x + dx[i];
                    ny = y + dy[i];

                    //이동한 좌표가 범위 안에 있는지 확인
                    if(nx >= 0 && ny >= 0 && nx < board.size() && ny < board.size()) {

                        //체크보드에 값 +1
                        checkBoard[nx][ny] = 1;
                    }
                }
            }

        }
    }

    //체크보드 탐색 반복문
    for(auto a : checkBoard) {
        for(auto b : a) {
            
            //0이면 안전지대이므로 answer + 1
            if(b == 0)  answer ++;
        }
    }

    return answer;
}