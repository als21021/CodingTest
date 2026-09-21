/*
문제 설명
정수 배열 numbers가 매개변수로 주어집니다. numbers의 원소 중 두 개를 곱해 만들 수 있는 최댓값을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
-10,000 ≤ numbers의 원소 ≤ 10,000
2 ≤ numbers 의 길이 ≤ 100
*/

/*
입출력 예
numbers	result
[1, 2, -3, 4, -5]	15
[0, -31, 24, 10, 1, 9]	240
[10, 20, 30, 5, 5, 20, 5]	600
*/

/*
풀이
이건 음수 두개 곱해서 나올 수 있는 최댓값까지 생각해야겠네
음수 최댓값 따로 양수 최댓값 따로 구해서 비교해도 되나
더 좋은 방법이 있을까
*/

#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    int answer = numbers[0] * numbers[1];
    if(numbers[1] * numbers[0] >= answer)  answer = numbers[0] * numbers[1];
    if((abs((*(numbers.end()-1)) * *(numbers.end()-2))) > answer)  answer = ((*(numbers.end()-1)) * *(numbers.end()-2));

    return answer;
}

/*
다른 풀이

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());

    int n = numbers.size();

    return max(numbers[n-1]*numbers[n-2], numbers[0]*numbers[1]);
}

algorithm 헤더에 min과 max 함수가 있음
*/