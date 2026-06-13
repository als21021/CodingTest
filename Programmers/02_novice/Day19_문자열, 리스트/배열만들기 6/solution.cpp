//배열만들기 6

/*
문제 설명

0과 1로만 이루어진 정수 배열 arr가 주어집니다.
arr를 이용해 새로운 배열 stk을 만드려고 합니다.
i의 초기값을 0으로 설정하고 i가 arr의 길이보다 작으면 다음을 반복합니다.
만약 stk이 빈 배열이라면 arr[i]를 stk에 추가하고 i에 1을 더합니다.
stk에 원소가 있고, stk의 마지막 원소가 arr[i]와 같으면 stk의 마지막 원소를 stk에서 제거하고 i에 1을 더합니다.
stk에 원소가 있는데 stk의 마지막 원소가 arr[i]와 다르면 stk의 맨 마지막에 arr[i]를 추가하고 i에 1을 더합니다.
위 작업을 마친 후 만들어진 stk을 return 하는 solution 함수를 완성해 주세요.
단, 만약 빈 배열을 return 해야한다면 [-1]을 return 합니다.
*/

/*
제한사항
1 ≤ arr의 길이 ≤ 1,000,000
arr의 원소는 0 또는 1 입니다.
*/

/*
풀이
문제 설명대로 쭉 만들면 되는거 아님?
뭔 문제가 아니라 해설을 해놨노
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    //만들 stk와 초기값 0의 i
    vector<int> stk; int i = 0;

    //i가 arr의 길이보다 작을동안 반복
    while(i < arr.size()) {

        //stk가 빈 배열이면 arr[i]를 stk에 추가하고 i에 1 더하기
        if(stk.empty()) {stk.push_back(arr[i]); i++;}

        //stk에 원소가 있고
        else {

            //stk의 마지막 원소가 arr[i]와 같으면
            if(stk.back() == arr[i]) {

                //stk의 마지막 원소를 stk에서 제거하고 i에 1 더하기
                stk.pop_back(); i++;
            }

            //stk의 마지막 원소가 arr[i]와 다르면
            else {

                //stk의 마지막 원소에 arr[i] 추가하고 i에 1 더하기
                stk.push_back(arr[i]); i++;
            }
        }
    }

    //빈 배열이면 -1 return
    return stk.empty() ? vector<int>{-1} : stk;
}