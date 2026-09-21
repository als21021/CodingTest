/*
문제 설명
2차원 좌표 평면에 변이 축과 평행한 직사각형이 있습니다. 직사각형 네 꼭짓점의 좌표 [[x1, y1], [x2, y2], [x3, y3], [x4, y4]]가 담겨있는 배열 dots가 매개변수로 주어질 때, 직사각형의 넓이를 return 하도록 solution 함수를 완성해보세요.
*/

/*
제한사항
dots의 길이 = 4
dots의 원소의 길이 = 2
-256 < dots[i]의 원소 < 256
잘못된 입력은 주어지지 않습니다.
*/

/*
풀이
직사각형이니까 점 하나를 기준으로 잡고
x값이 같은 원소로 높이, y값이 같은 원소로 폭을 구한 뒤
두 길이를 곱함
*/

#include <vector>
#include <cmath>
using namespace std;

int solution(vector<vector<int>> dots) {
    int height, width;
    for(int i = 1; i < 4; i++) {

        if(dots[i][0] == dots[0][0]) {
            height = abs(dots[i][1] - dots[0][1]);
        }

        if(dots[i][1] == dots[0][1]) {
            width = abs(dots[i][0] - dots[0][0]);
        }
    }

    return width * height;
}

/*
cmath
abs()   절대값
sqrt()  제곱근
pow()   n제곱
*/