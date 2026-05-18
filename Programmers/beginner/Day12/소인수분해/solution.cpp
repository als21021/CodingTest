/*
문제 설명
소인수분해란 어떤 수를 소수들의 곱으로 표현하는 것입니다. 예를 들어 12를 소인수 분해하면 2 * 2 * 3 으로 나타낼 수 있습니다. 따라서 12의 소인수는 2와 3입니다. 자연수 n이 매개변수로 주어질 때 n의 소인수를 오름차순으로 담은 배열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
2 ≤ n ≤ 10,000
*/

/*
풀이
1부터 n까지 반복문 하나 만들고
소수 판별 조건문(1부터 i까지 반복해서 나누어 떨어지는 수가 2개)에 해당하는 인덱스로 나누어 떨어지면 벡터에 추가
*/

#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i = 2; i <= n; i++) {
        int count = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) count++;
        }
        if((count == 2)&&(n % i == 0)) answer.push_back(i);
    }

    return answer;
}

/*
다른 풀이
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int num = 2;
    while(n!=1)
    {
        if(n % num == 0){
            n = n / num;
            answer.push_back(num);   
        }
        else
            num++;
    }
    sort(answer.begin(),answer.end());
    answer.erase(unique(answer.begin(),answer.end()),answer.end());
    return answer;
}


그러네 생각해보니까 소수를 판별할 필요가 없네
어차피 소수들로 안 나눠지면 2의 배수들로도 안 나눠질테니까
*/

/*
unique 함수

중복되지 않은 원소들을 앞으로 미뤄놓고 중복되는 원소들의 주소를 리턴

answer = [2, 2, 3, 5, 5]
unique(answer.begin(), answer.end())
answer -> [2, 3, 5, ?, ?]
unique는 세번째 원소인 5 뒤의 주소를 반환

answer.erase(unique(answer.begin(), answer.end()), answer.end())
-> 중복 원소가 시작되는 곳부터 맨 끝까지 지우는 함수

중복 제거 시 자주 사용되니 알아두는게 좋음
*/