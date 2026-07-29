/*
공원

문제 설명

지민이는 다양한 크기의 정사각형 모양 돗자리를 가지고 공원에 소풍을 나왔습니다.
공원에는 이미 돗자리를 깔고 여가를 즐기는 사람들이 많아 지민이가 깔 수 있는 가장 큰 돗자리가 어떤 건지 확인하려 합니다.
예를 들어 지민이가 가지고 있는 돗자리의 한 변 길이가 5, 3, 2 세 종류이고,
사람들이 다음과 같이 앉아 있다면 지민이가 깔 수 있는 가장 큰 돗자리는 3x3 크기입니다.
10.jpg
지민이가 가진 돗자리들의 한 변의 길이들이 담긴 정수 리스트 mats,
현재 공원의 자리 배치도를 의미하는 2차원 문자열 리스트 park가 주어질 때 지민이가 깔 수 있는 가장 큰 돗자리의 한 변 길이를 return 하도록 solution 함수를 완성해 주세요.
아무런 돗자리도 깔 수 없는 경우 -1을 return합니다.

제한사항
1 ≤ mats의 길이 ≤ 10
1 ≤ mats의 원소 ≤ 20
mats는 중복된 원소를 가지지 않습니다.
1 ≤ park의 길이 ≤ 50
1 ≤ park[i]의 길이 ≤ 50
park[i][j]의 원소는 문자열입니다.
park[i][j]에 돗자리를 깐 사람이 없다면 "-1", 사람이 있다면 알파벳 한 글자로 된 값을 갖습니다.
*/

/*
풀이

park의 알파벳은 중요하지 않고 -1이냐 아니냐만 보면 됨

park[i][j] == -1 이면, 크기 1의 돗자리는 깔 수 있음
그럼 park[i+1][j], park[i][j+1], park[i+1][j+1] == -1 이면, 크기 2x2의 돗자리를 깔 수 있음
park[i+n][j+m], 이면 nxn의 돗자리를 깔 수 있음 (n == m이지만 반복문 따로 작동)

mats에 n보다 작거나 같은 원소가 있다면 해당 원소를 반환, 없다면 -1을 반환
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {

    int answer = -1;
    int maxMatSize = 0;
    int row = park.size();
    int column = park[0].size();

    //park[0][0]부터 park[i][j]까지 반복
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {

            //-1일 때만 진행
            if(park[i][j] != "-1") continue;

            //늘어날 수 있는 칸의 최대치
            int maxSize = min(row - i, column - j);
            int size = 1;

            for(int n = 1; n < maxSize; n++) {
                bool ok = true;
                for(int k = 0; k <= n && ok; k++) {
                    if(park[i + n][j + k] != "-1") ok = false;
                    if(park[i + k][j + n] != "-1") ok = false;
                }
                if(!ok) break;
                size = n + 1;
            }

            maxMatSize = max(maxMatSize, size);
        }
    }

    for(int mat : mats) {
        if(mat <= maxMatSize) answer = max(answer, mat);
    }

    return answer;
}