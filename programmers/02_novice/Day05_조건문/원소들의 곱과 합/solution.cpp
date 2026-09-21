/*
문제 설명
정수가 담긴 리스트 num_list가 주어질 때,
모든 원소들의 곱이 모든 원소들의 합의 제곱보다 작으면 1을 크면 0을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
2 ≤ num_list의 길이 ≤ 10
1 ≤ num_list의 원소 ≤ 9
*/

#include <vector>
using namespace std;

int solution(vector<int> num_list) {

    int multi = 1;
    int plus = 0;

    for(int i : num_list) {
        multi *= i;
        plus += i;
    }

    return multi < (plus * plus);
}