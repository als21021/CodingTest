/*
3진법 뒤집기

문제 설명

자연수 n이 매개변수로 주어집니다. n을 3진법 상에서 앞뒤로 뒤집은 후, 이를 다시 10진법으로 표현한 수를 return 하도록 solution 함수를 완성해주세요.

제한사항
n은 1 이상 100,000,000 이하인 자연수입니다.
*/

/*
풀이

n을 3진수로 변환부터 해야함

        while(count > 1) {
            if(count % 2) x = '1' + x;
            else x = '0' + x;
            count /= 2;
        }

지난번 2진수 변환 코드에서 좀만 변환시키면 될 듯

        while(n > 2) {
            if(n % 3 == 0) x.push_back('0');
            else if(n % 3 == 1) x.push_back('1');
            else x.push_back('2');
            n /= 3;
        }

마지막에 어차피 뒤집어야 하니까 그냥 push_back으로 뒤로 추가해주면 될 듯
n /= 3 나누고 마지막에 남은 수도 더해줘야 함

반복문이 끝나고 n push_back
*/

#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {

    int answer = 0;
    string x;

    while(n > 2) {
        if(n % 3 == 0) x.push_back('0');
        else if(n % 3 == 1) x.push_back('1');
        else x.push_back('2');
        n /= 3;
    }
    x.push_back(n + '0');
    reverse(x.begin(), x.end());

    for(int i = 0; i < x.length(); i++) {

        answer += pow(3, i) * (x[i] - '0');
    }
    
    return answer;
}