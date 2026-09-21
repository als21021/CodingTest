/*
문제 설명
1부터 6까지 숫자가 적힌 주사위가 세 개 있습니다.
세 주사위를 굴렸을 때 나온 숫자를 각각 a, b, c라고 했을 때 얻는 점수는 다음과 같습니다.

세 숫자가 모두 다르다면 a + b + c 점을 얻습니다.
세 숫자 중 어느 두 숫자는 같고 나머지 다른 숫자는 다르다면 (a + b + c) × (a2 + b2 + c2 )점을 얻습니다.
세 숫자가 모두 같다면 (a + b + c) × (a2 + b2 + c2 ) × (a3 + b3 + c3 )점을 얻습니다.
세 정수 a, b, c가 매개변수로 주어질 때, 얻는 점수를 return 하는 solution 함수를 작성해 주세요.
*/

/*
제한사항
a, b, c는 1이상 6이하의 정수입니다.
*/

/*
풀이
a, b, c가 각각 몇 개가 같은지 판별하는 함수 따로 만들랭
다 다르면 0, 두 개만 같으면 1, 다 같으면 2 리턴하게 만들어서
switch case로 하면 될 듯
*/

#include <cmath>
using namespace std;

int solution(int a, int b, int c) {

    int diceCase;
    if(a == b && b == c) diceCase = 2;
    else if(a == b || b == c || c == a) diceCase = 1;
    else diceCase = 0;

    switch(diceCase) {

        case 0:
            return a + b + c;

        case 1:
            return (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));

        case 2:
            return (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2)) * (pow(a, 3) + pow(b, 3) + pow(c, 3));

        default:
            break;
    }
}