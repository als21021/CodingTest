/*
문제 설명
선분 세 개로 삼각형을 만들기 위해서는 다음과 같은 조건을 만족해야 합니다.

가장 긴 변의 길이는 다른 두 변의 길이의 합보다 작아야 합니다.
삼각형의 두 변의 길이가 담긴 배열 sides이 매개변수로 주어집니다. 나머지 한 변이 될 수 있는 정수의 개수를 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
sides의 원소는 자연수입니다.
sides의 길이는 2입니다.
1 ≤ sides의 원소 ≤ 1,000
*/

/*
풀이
나머지 한 변을 a라고 했을 때
a가 가장 긴 변일 때 a < sides[0] + sides[1]
a가 가장 긴 변이 아닐 때 sides[1] < a + sides[0]
sides[1] - sides[0] < a
sides[1]이 sides[0]보다 작다는 가정하이므로 sort(sides.begin(), sides.end()) 도 해줘야 할 듯
아님 어차피 두 수의 차니까 절대값으로 할까 절대값 함수 뭐였지 abs

따라서, abs(sides[0] - sides[1]) < a < sides[0] + sides[1]

a의 개수는 sides[0] + sides[1] - abs(sides[0] - sides[1]) - 1
*/

#include <cmath>
#include <vector>
using namespace std;

int solution(vector<int> sides) {
    return sides[0] + sides[1] - abs(sides[0] - sides[1]) - 1;
}

/*
더 작은 변 * 2 - 1도 되겠네
2 * min(sides[0], sides[1]) - 1
*/