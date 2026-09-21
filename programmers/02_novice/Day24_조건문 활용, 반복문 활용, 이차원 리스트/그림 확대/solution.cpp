/*
문제 설명

직사각형 형태의 그림 파일이 있고,
이 그림 파일은 1 × 1 크기의 정사각형 크기의 픽셀로 이루어져 있습니다.
이 그림 파일을 나타낸 문자열 배열 picture과 정수 k가 매개변수로 주어질 때, 이 그림 파일을 가로 세로로 k배 늘린 그림 파일을 나타내도록 문자열 배열을 return 하는 solution 함수를 작성해 주세요.

제한사항
1 ≤ picture의 길이 ≤ 20
1 ≤ picture의 원소의 길이 ≤ 20
모든 picture의 원소의 길이는 같습니다.
picture의 원소는 '.'과 'x'로 이루어져 있습니다.
1 ≤ k ≤ 10
*/

/*
풀이

각 요소가 전부 k배씩 더 들어가면 됨
이차원 배열 하나 더 만들고 picture 반복 돌리면서 k번씩 넣으면 될 듯
*/

#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer(picture.size() * k);

    //한 줄씩 불러오기
    for(int pictureIndex = 0; pictureIndex < picture.size(); pictureIndex++) {
        
        //해당 줄에 한 픽셀씩 가져오기
        for(int pixelIndex = 0; pixelIndex < picture[pictureIndex].size(); pixelIndex++) {

            //반복횟수만큼 추가
            for(int repeat = 0; repeat < k; repeat++) {
                answer[pictureIndex * repeat].push_back(picture[pictureIndex][pixelIndex]);
            }
        }

        //세로 줄 추가
        for(int repeat = 0; repeat < k; repeat++) {
            answer[pictureIndex * repeat - k] = answer[pictureIndex * repeat];
        }
    }

    return answer;
}