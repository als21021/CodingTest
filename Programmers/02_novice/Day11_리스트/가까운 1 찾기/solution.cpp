/*
문제 설명

정수 배열 arr가 주어집니다.
이때 arr의 원소는 1 또는 0입니다.
정수 idx가 주어졌을 때,
idx보다 크거나 같으면서 배열의 값이 1인 가장 작은 인덱스를 찾아서 반환하는 solution 함수를 완성해 주세요.

단, 만약 그러한 인덱스가 없다면 -1을 반환합니다.
*/

/*
제한사항
3 ≤ arr의 길이 ≤ 100,000
arr의 원소는 전부 1 또는 0입니다.
*/

/*
풀이
arr의 인덱스 idx부터 쭉 올라갈거임
원소가 1이면 바로 return i
반복문 밖에서 return -1
*/

#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {

    for(int i = idx; i < arr.size(); i++) {
        if(arr[i] == 1) return i;
    }
    return -1;
}