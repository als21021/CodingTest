/*
문제 설명
문자열 "hello"에서 각 문자를 오른쪽으로 한 칸씩 밀고 마지막 문자는 맨 앞으로 이동시키면 "ohell"이 됩니다.
이것을 문자열을 민다고 정의한다면 문자열 A와 B가 매개변수로 주어질 때,
A를 밀어서 B가 될 수 있다면 밀어야 하는 최소 횟수를 return하고 밀어서 B가 될 수 없으면 -1을 return 하도록 solution 함수를 완성해보세요.
*/

/*
제한사항
0 < A의 길이 = B의 길이 < 100
A, B는 알파벳 소문자로 이루어져 있습니다.
*/

/*
풀이
answer는 민 횟수가 저장되는 변수로 만들거임
wihle(A != B)로 해서 같을 때까지 쭉 밀지 말고
이러면 계속 돌아가잖아
for(int i = 0; i < A.length(); i++)로 한 바퀴만 돌게 해서

for(int j = 1; j < A.length() - 1; j++)로 문자 밀어주는 반복문 생성
char c = A[A.length - 1] 마지막 문자 저장해주고
A[i] = A[i - 1] 이러면 1부터 시작해야겠네
A[A.length - 1] = c 까지

밀고 나서

if(A == B)면 return answer 해주고
다 돌았는데도 리턴 안 됐으면 return -1
*/

#include <string>
using namespace std;

int solution(string A, string B) {
    
    //민 횟수 저장할 변수
    int answer = 0;

    //시작부터 똑같을 경우
    if(A == B)  return answer;

    //문자 길이만큼 반복
    for(int i = 0; i < A.length(); i++) {

        //밀기 전 끝 문자 저장해놓기
        char c = A[A.length() - 1];

        //문자 하나씩 밀어줄 반복문
        for(int j = A.length() - 1; j > 0; j--) {
            A[j] = A[j - 1];
        }

        //밀기 완료, 횟수 증가
        A[0] = c;
        answer++;
    
        //같으면 민 횟수 리턴, 다르면 한 번 더 밀게 반복
        if(A == B)  return answer;
    }

    //한바퀴 다 밀었는데 안 끝났으면
    return -1;
}

/*
다른 풀이
#include <string>

using namespace std;

int solution(string A, string B)
{
    B += B;
    return B.find(A);
}

이런 생각은 어떻게 하는건지 ㄷㄷ;
*/