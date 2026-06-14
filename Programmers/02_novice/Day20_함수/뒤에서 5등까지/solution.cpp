//뒤에서 5등까지

/*
문제 설명

정수로 이루어진 리스트 num_list가 주어집니다.
num_list에서 가장 작은 5개의 수를 오름차순으로 담은 리스트를 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
6 ≤ num_list의 길이 ≤ 30
1 ≤ num_list의 원소 ≤ 100
*/

/*
풀이
num_list 정렬 시키고
0부터 4까지만 return
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> num_list) {
    sort(num_list.begin(), num_list.end());

    vector<int> answer(num_list.begin(), num_list.begin() + 5);
    return answer;
}