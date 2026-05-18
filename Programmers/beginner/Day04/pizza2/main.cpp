/*
문제 설명
머쓱이네 피자가게는 피자를 여섯 조각으로 잘라 줍니다. 피자를 나눠먹을 사람의 수 n이 매개변수로 주어질 때, n명이 주문한 피자를 남기지 않고 모두 같은 수의 피자 조각을 먹어야 한다면 최소 몇 판을 시켜야 하는지를 return 하도록 solution 함수를 완성해보세요.
*/

/*
풀이
n = 1, answer = 1
n = 2, answer = 1
n = 3, answer = 1
n = 4, answer = 2
n = 5, answer = 5
n = 6, answer = 1
n = 7, answer = 7
n = 8, answer = 4
n = 9, answer = 3
*/
#include <string>
#include <vector>

using namespace std;

int solution(int n) {

    int answer = 0;
    for(int i = 1; i <= n * 6; i++) {
        if((n * i) % 6 == 0) {
            answer = (n * i) / 6;
            break;
        }
    }
    return answer;
}

/*
다른 풀이
피자 수를 하나씩 늘려나가면 코드가 짧아짐
int pizza = 1;
while((pizza * 6) % n != 0) pizza++;
return pizza;
피자를 한 판씩 늘려가며 사람들이 다 먹을 수 있는지 확인하기 때문에 일반적인 사고방식과도 유사함
*/