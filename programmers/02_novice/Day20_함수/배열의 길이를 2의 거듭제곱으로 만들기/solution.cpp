//배열의 길이를 2의 거듭제곱으로 만들기

/*
문제 설명

정수 배열 arr이 매개변수로 주어집니다.
arr의 길이가 2의 정수 거듭제곱이 되도록 arr 뒤에 정수 0을 추가하려고 합니다.
arr에 최소한의 개수로 0을 추가한 배열을 return 하는 solution 함수를 작성해 주세요.
*/

/*
제한사항
1 ≤ arr의 길이 ≤ 1,000
1 ≤ arr의 원소 ≤ 1,000
*/

/*
풀이
arr의 길이보다 크거나 같은 2의 거듭제곱 최소의 길이를 찾아야 함

n의 초기값 2
길이 n이 arr의 길이보다 작을 동안 반복 n *= 2

insert(arr.end(), n - arr의 길이,0)
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int range = 1;

    while(range < arr.size()) range *= 2;

    arr.insert(arr.end(), range - arr.size(), 0);

    return arr;
}