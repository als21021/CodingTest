/*
문제 설명
프로그래머스 치킨은 치킨을 시켜먹으면 한 마리당 쿠폰을 한 장 발급합니다.
쿠폰을 열 장 모으면 치킨을 한 마리 서비스로 받을 수 있고, 서비스 치킨에도 쿠폰이 발급됩니다.
시켜먹은 치킨의 수 chicken이 매개변수로 주어질 때 받을 수 있는 최대 서비스 치킨의 수를 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
chicken은 정수입니다.
0 ≤ chicken ≤ 1,000,000
*/

/*
풀이
chicken까지 반복하면서 i가 10의 배수일 때마다 answer(서비스 개수)++ 하는데 chicken도 +1 해주면 되려나
근데 서비스 치킨에 쿠폰 주는 가게가 어딨어 ㅅㅂ
*/

#include <vector>

using namespace std;

int solution(int chicken) {
    //서비스 치킨 수
    int answer = 0;

    //치킨 수만큼 반복
    for(int i = 1; i <= chicken; i++) {
        
        //10개마다 서비스 +1
        if(i % 10 == 0) {
            answer++;   chicken++;
        }
    }
    return answer;
}