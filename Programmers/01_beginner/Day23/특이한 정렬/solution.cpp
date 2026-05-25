/*
문제 설명
정수 n을 기준으로 n과 가까운 수부터 정렬하려고 합니다.
이때 n으로부터의 거리가 같다면 더 큰 수를 앞에 오도록 배치합니다.
정수가 담긴 배열 numlist와 정수 n이 주어질 때 numlist의 원소를 n으로부터 가까운 순서대로 정렬한 배열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ n ≤ 10,000
1 ≤ numlist의 원소 ≤ 10,000
1 ≤ numlist의 길이 ≤ 100
numlist는 중복된 원소를 갖지 않습니다.
*/

/*
풀이
sort() 함수 안에 함수를 넣을 수 있음

n과 비교해주는 함수를 새로 만들자
앞에가 뒤에보다 n과의 차이가 더 작으면 true 리턴
bool compare(int a, int b, int n) {
    
    if((a - n) == (b - n)) {
        return a > b;
    }

    return (a - n) < (b - n);
}

*/

#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {

    if(abs(a) == abs(b))  return a > b;
    
    return abs(a) < abs(b);
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer = numlist;

    for(int& a : answer) {
        a -= n;
    }

    sort(answer.begin(), answer.end(), compare);

    for(int& a : answer) {
        a += n;
    }

    return answer;
}