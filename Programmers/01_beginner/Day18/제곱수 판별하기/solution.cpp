/*
문제 설명
어떤 자연수를 제곱했을 때 나오는 정수를 제곱수라고 합니다. 정수 n이 매개변수로 주어질 때, n이 제곱수라면 1을 아니라면 2를 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ n ≤ 1,000,000
*/

/*
풀이
나누는 수와 몫이 같으면 제곱수로 하면 될듯
반복문의 범위 설정은 어떻게 하면 좋을까
제한사항이 1000000이니까 1000까지 해버릴까
*/

int solution(int n) {
    for(int i = 1; i <= 1000; i++) {
        if((double)n / i == i) return 1;
    }
    return 2;
}

/*
다른 풀이
내 풀이는 1000까지 반복해버리기 때문에 좋은 코딩이 아님
n까지만 반복을 돌리는 코드를 찾는게 좋음
for(int i = 0; i < n; i++) {
    if(i * i == n) return 1;
}
return 2;

이렇게 하면 되는구나
아니면
#include <cmath>

int i = sqrt(n);    //sqrt == 제곱근

if(pow(i, 2) == n)  //pow(a, n) == a의 n제곱
    return 1;
else
    return 2;
*/