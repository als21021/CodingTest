/*
문제 설명
머쓱이네 옷가게는 10만 원 이상 사면 5%, 30만 원 이상 사면 10%, 50만 원 이상 사면 20%를 할인해줍니다.
구매한 옷의 가격 price가 주어질 때, 지불해야 할 금액을 return 하도록 solution 함수를 완성해보세요.
*/

/*
제한사항
10 ≤ price ≤ 1,000,000
price는 10원 단위로(1의 자리가 0) 주어집니다.
소수점 이하를 버린 정수를 return합니다.
*/

/*
풀이
조건문 세개 쓰면 될 거 같은뎅
금액이 가장 큰 50부터 조건문 쓰면서 하나씩 내려가기
*/

#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    if(price >= 500000) {
        answer = price * 0.8;
    }else if(price >= 300000) {
        answer = price * 0.9;
    }else if(price >= 100000) {
        answer = price * 0.95;
    }else {
        answer = price;
    }
    return answer;
}