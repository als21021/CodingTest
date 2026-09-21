/*
문제 설명
1부터 13까지의 수에서, 1은 1, 10, 11, 12, 13 이렇게 총 6번 등장합니다.
정수 i, j, k가 매개변수로 주어질 때, i부터 j까지 k가 몇 번 등장하는지 return 하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ i < j ≤ 100,000
0 ≤ k ≤ 9
*/

/*
i부터 j까지 반복문 돌리는데 반복문 안에서 문자열로 바꿔서
문자로 바꾼 k가 몇 번 등장하는지 세면 될 듯
*/

#include <string>
using namespace std;

int solution(int i, int j, int k) {
    
    //등장횟수 더할 변수
    int answer = 0;
    char c = '0' + k;
    //i-j 반복문
    for(int a = i; a <= j; a++) {
        string str = to_string(a);
        for(auto d : str) {
            if(c == d) answer++;
        }
    }

    return answer;
}