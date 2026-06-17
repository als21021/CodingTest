/*
문제 설명

정수 배열 arr과 delete_list가 있습니다.
arr의 원소 중 delete_list의 원소를 모두 삭제하고 남은 원소들은 기존의 arr에 있던 순서를 유지한 배열을 return 하는 solution 함수를 작성해 주세요.

제한사항
1 ≤ arr의 길이 ≤ 100
1 ≤ arr의 원소 ≤ 1,000
arr의 원소는 모두 서로 다릅니다.
1 ≤ delete_list의 길이 ≤ 100
1 ≤ delete_list의 원소 ≤ 1,000
delete_list의 원소는 모두 서로 다릅니다.
*/

#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {

    unordered_set<int> del(delete_list.begin(), delete_list.end());

    vector<int> answer;

    for(int a : arr) {

        if(del.find(a) == del.end()) answer.push_back(a);
    }
    return arr;
}