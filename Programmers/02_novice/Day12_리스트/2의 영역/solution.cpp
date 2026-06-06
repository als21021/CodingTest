/*
문제 설명

정수 배열 arr가 주어집니다.
배열 안의 2가 모두 포함된 가장 작은 연속된 부분 배열을 return 하는 solution 함수를 완성해 주세요.
단, arr에 2가 없는 경우 [-1]을 return 합니다.
*/

/*
제한사항
1 ≤ arr의 길이 ≤ 100,000
1 ≤ arr의 원소 ≤ 10
*/

/*
풀이
find(begin, end, 2) 를 하면 2가 있는 iterator 반환
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {

    int start = -1;
    int end = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 2) {
            if(start == -1) start = i;
            end = i;
        }
    }

    if(start == -1) return {-1};

    return vector<int>(arr.begin() + start, arr.begin() + end + 1);
}