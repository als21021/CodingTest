/*
문제 설명
연산 ⊕는 두 정수에 대한 연산으로 두 정수를 붙여서 쓴 값을 반환합니다. 예를 들면 다음과 같습니다.

12 ⊕ 3 = 123
3 ⊕ 12 = 312
양의 정수 a와 b가 주어졌을 때, a ⊕ b와 b ⊕ a 중 더 큰 값을 return 하는 solution 함수를 완성해 주세요.

단, a ⊕ b와 b ⊕ a가 같다면 a ⊕ b를 return 합니다.
*/

/*
제한사항
1 ≤ a, b < 10,000
*/

/*
풀이
to_string으로 두 문자를 합친 뒤 stoi로 다시 바꿔서 비교
*/

#include <string>
using namespace std;

int solution(int a, int b) {
    return (stoi(to_string(a) + to_string(b)) >= stoi(to_string(b) + to_string(a)))?stoi(to_string(a) + to_string(b)) : stoi(to_string(b) + to_string(a));
}