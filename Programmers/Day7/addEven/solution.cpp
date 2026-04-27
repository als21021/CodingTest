/*
문제 설명
정수 n이 주어질 때, n이하의 짝수를 모두 더한 값을 return 하도록 solution 함수를 작성해주세요.
*/

/*
제한사항
0 < n ≤ 1000
*/

/*
풀이
인덱스 0 - n까지 반복문 만들고 2씩 인덱스 올라가게 한 다음에 다 더하기
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 0; i <=n; i+=2) {
        answer += i;
    }
    return answer;
}