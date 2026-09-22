/*
N개의 최소공배수

문제 설명

두 수의 최소공배수(Least Common Multiple)란 입력된 두 수의 배수 중 공통이 되는 가장 작은 숫자를 의미합니다. 예를 들어 2와 7의 최소공배수는 14가 됩니다. 정의를 확장해서, n개의 수의 최소공배수는 n 개의 수들의 배수 중 공통이 되는 가장 작은 숫자가 됩니다. n개의 숫자를 담은 배열 arr이 입력되었을 때 이 수들의 최소공배수를 반환하는 함수, solution을 완성해 주세요.

제한 사항
arr은 길이 1이상, 15이하인 배열입니다.
arr의 원소는 100 이하인 자연수입니다.

입출력 예
arr	result
[2,6,8,14]	168
[1,2,3]	6
*/

/*
풀이

제일 큰 수 뽑아서 배로 올려가면서 전부 나눠지는지 확인
max_element

전부 나눠지면 return
안 나눠지면 곱하기
*/

#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = *max_element(arr.begin(), arr.end());
    int max = 1;
    for(int a : arr) max *= a;
    max /= answer;

    for(int i = 1; i <= max; i++) {
        int count = 0;
        for(int a : arr) {
            if((answer * i) % a == 0) count++;
        }
        if(count == arr.size()) return answer * i;
        else continue;
    }
}

/*
시간복잡도가 큰 풀이

gcd(최대공약수)활용
lcm(최소공배수)는 두 수의 곱을 gcd로 나눈 것과 같음

배열의 첫 원소부터 차례대로 다음 원소와의 최소공배수를 누적해가면 최소공배수를 빠르게 구할 수 있음

numeric::std::gcd 함수를 통해 gcd를 빠르게 구할 수 있음
gcd(a, b); -> a와 b의 gcd

또는

유클리드 호제법 기반 최대공약수(GCD) 함수
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

이를 통해 gcd를 구할 수 있음

answer에 arr[0] 넣어놓고 배열 시작해서
answer = answer * arr[i] / gcd(answer, arr[i]);
*/