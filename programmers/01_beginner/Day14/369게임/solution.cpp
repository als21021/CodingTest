/*
문제 설명
머쓱이는 친구들과 369게임을 하고 있습니다. 369게임은 1부터 숫자를 하나씩 대며 3, 6, 9가 들어가는 숫자는 숫자 대신 3, 6, 9의 개수만큼 박수를 치는 게임입니다. 머쓱이가 말해야하는 숫자 order가 매개변수로 주어질 때, 머쓱이가 쳐야할 박수 횟수를 return 하도록 solution 함수를 완성해보세요.
*/

/*
제한사항
1 ≤ order ≤ 1,000,000
*/

/*
풀이
한 자리씩 추출해서 정답에 ++ 하는 방법
*/

/*
내 오답
int solution(int order) {
    int answer = 0;

    if((order / 1000000 != 0) && ((order / 1000000) % 3 == 0)) {
        answer++;
        order = order % 1000000;
    }
    if((order / 100000 != 0) && ((order / 100000) % 3 == 0)) {
        answer++;
        order = order % 100000;
    }
    if((order / 10000 != 0) && ((order / 10000) % 3 == 0))  {
        answer++;
        order = order % 10000;
    }
    if((order / 1000 != 0) && ((order / 1000) % 3 == 0))  {
        answer++;
        order = order % 1000;
    }
    if((order / 100 != 0) && ((order / 100) % 3 == 0))  {
        answer++;
        order = order % 100;
    }
    if((order / 10 != 0) && ((order / 10) % 3 == 0))  {
        answer++;
        order = order % 10;
    }
    if(order % 3 == 0)  answer++;
    return answer;
}

//걍 개병신 똥풀이
*/

/*
1의 자리씩 추출하는 방법
int solution(int order) {
    int answer = 0;
    
    while (order > 0) {
        int digit = order % 10; // 1. 일의 자릿수를 추출
        
        // 2. 그 숫자가 0이 아니고, 3의 배수(3, 6, 9)인지 확인
        if (digit != 0 && digit % 3 == 0) {
            answer++;
        }
        
        order /= 10; // 3. 일의 자리를 버림 (다음 자릿수로 이동)
    }
    
    return answer;
}
*/

//문자열로 변환하는 방법
#include <string>
using namespace std;

int solution(int order) {
    int answer = 0;
    string s = to_string(order); // 숫자를 "29423" 같은 문자로 변환
    
    for (char c : s) {
        if (c == '3' || c == '6' || c == '9') {
            answer++;
        }
    }
    return answer;
}

/*
to_string(int num) == string s;
*/