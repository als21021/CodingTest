/*
다음 큰 숫자

문제 설명

자연수 n이 주어졌을 때, n의 다음 큰 숫자는 다음과 같이 정의 합니다.
조건 1. n의 다음 큰 숫자는 n보다 큰 자연수 입니다.
조건 2. n의 다음 큰 숫자와 n은 2진수로 변환했을 때 1의 갯수가 같습니다.
조건 3. n의 다음 큰 숫자는 조건 1, 2를 만족하는 수 중 가장 작은 수 입니다.
예를 들어서 78(1001110)의 다음 큰 숫자는 83(1010011)입니다.
자연수 n이 매개변수로 주어질 때, n의 다음 큰 숫자를 return 하는 solution 함수를 완성해주세요.

제한 사항
n은 1,000,000 이하의 자연수 입니다.
*/

/*
풀이

일단 n을 이진수로 변경해야겠지?

string nToBinary;
n > 1일 동안,
n % 2 == 1이면 nToBinary.push_back(1);
아니면 nToBinary.push_back(0);
n /= 2;
이걸로 반복문 쭉 돌리고
반복문이 끝나면 남은 n도 push_back 해주면 이진수 뒤집힌 형태로 나옴

조건 1, 2를 만족할 때까지 1씩 더해가면 되지 않을까

더한 순간 조건 1은 만족하니까 2만 만족시키면 됨
for(char c : nToBinary)로 1의 개수 세고

일단 더하고 시작해야하니까 do while로 하면 될듯

for(char& c : nToBinary)
c == 0이면 c = 1; break;
c == 1이면 c = 0;

1 더해주면 nToBinary 1의 개수 따로 세서 저장해줘야 함

while 조건은 count != nCount

조건문이 끝나면 이진수를 다시 자연수로 바꿔줘야 함

for(int i = 0; i < nToBinary.size(); i++) {

    answer += stoi(nToBinary[i]) * pow(2, i);
}
*/

#include <string>
#include<cmath>
using namespace std;

int solution(int n) {
    int answer = 0;

    //n을 이진수로 변환 (reverse 형태)
    string nToBinary;
    while(n > 1) {

        if(n % 2) nToBinary.push_back('1');
        else nToBinary.push_back('0');
        n /= 2;
    }
    nToBinary.push_back(n + '0');

    //1의 개수 세기
    int count = 0;
    for(char c : nToBinary) {

        if(c == '1') count++;
    }

    int nCount;
    do {      
        for(char& c : nToBinary) {

            if(c == '0') {
                c = '1';
                break;
            } else c = '0';
        }
        if(stoull(nToBinary) == 0) nToBinary.push_back('1');

        nCount = 0;
        for(char c : nToBinary) {

            if(c == '1') nCount++;
        }

    } while(count != nCount);

    for(int i = 0; i < nToBinary.size(); i++) {

        answer += (nToBinary[i] - '0') * pow(2, i);
    } 

    return answer;
}

/*
다른 풀이

#include <bitset>

using namespace std;

int solution(int n) {
    int num = bitset<20>(n).count();

    while (bitset<20>(++n).count() != num);
    return n;
}
*/