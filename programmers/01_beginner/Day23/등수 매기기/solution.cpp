/*
문제 설명
영어 점수와 수학 점수의 평균 점수를 기준으로 학생들의 등수를 매기려고 합니다.
영어 점수와 수학 점수를 담은 2차원 정수 배열 score가 주어질 때,
영어 점수와 수학 점수의 평균을 기준으로 매긴 등수를 담은 배열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
0 ≤ score[0], score[1] ≤ 100
1 ≤ score의 길이 ≤ 10
score의 원소 길이는 2입니다.
score는 중복된 원소를 갖지 않습니다.
*/

/*
풀이
점수의 평균을 담을 배열을 따로 만들고

원래의 인덱스도 담아서 2차원 배열로 만들까

그 다음 정렬 시키고

순서 매기기 동점이면 어떡할거야
*/

#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<vector<int>> score) {
    int n = score.size();
    vector<double> avg(n);
    vector<int> answer(n);
    
    for (int i = 0; i < n; i++)
        avg[i] = (score[i][0] + score[i][1]) / 2.0;
    
    for (int i = 0; i < n; i++) {
        int rank = 1;
        for (int j = 0; j < n; j++)
            if (avg[j] > avg[i]) rank++;
        answer[i] = rank;
    }
    
    return answer;
}