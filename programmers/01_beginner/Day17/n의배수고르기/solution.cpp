/*
문제 설명
정수 n과 정수 배열 numlist가 매개변수로 주어질 때, numlist에서 n의 배수가 아닌 수들을 제거한 배열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ n ≤ 10,000
1 ≤ numlist의 크기 ≤ 100
1 ≤ numlist의 원소 ≤ 100,000
*/

/*
풀이
걍 0부터 numlist.size()까지 반복문 돌리고 각 인덱스마다 원소%n 해봐서 0이면 새로 더하는게 나을듯 있던거에 빼는거보단
*/

#include <vector>
using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;

    for(auto i : numlist) {
        if(i % n == 0)  answer.push_back(i);
    }

    return answer;
}