/*
문제 설명
정수 배열 numbers가 매개변수로 주어집니다. numbers의 원소의 평균값을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
0 ≤ numbers의 원소 ≤ 1,000
1 ≤ numbers의 길이 ≤ 100
정답의 소수 부분이 .0 또는 .5인 경우만 입력으로 주어집니다.
*/

/*
풀이
걍 다 더해서 평균 구하면 되는거 아님?
*/

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    int sum = 0;
    for(int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    double answer = (double)sum / numbers.size();
    return answer;
}