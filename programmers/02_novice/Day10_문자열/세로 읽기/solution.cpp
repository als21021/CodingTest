/*
문제 설명
문자열 my_string과 두 정수 m, c가 주어집니다.
my_string을 한 줄에 m 글자씩 가로로 적었을 때
왼쪽부터 세로로 c번째 열에 적힌 글자들을 문자열로 return 하는 solution 함수를 작성해 주세요.
*/

/*
제한사항
my_string은 영소문자로 이루어져 있습니다.
1 ≤ m ≤ my_string의 길이 ≤ 1,000
m은 my_string 길이의 약수로만 주어집니다.
1 ≤ c ≤ m
*/

/*
풀이
문자를 m개마다 나눠서 2차원 배열을 새로 만들고 c번째것만 더하면 됨
*/

#include <string>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    
    // c-1번째 인덱스부터 시작해서 m칸씩 건너뛰며 문자를 더함
    for (int i = c - 1; i < my_string.size(); i += m) {
        answer += my_string[i];
    }
    
    return answer;
}