/*
문제 설명
정수 배열 arr와 query가 주어집니다.
query를 순회하면서 다음 작업을 반복합니다.
짝수 인덱스에서는 arr에서 query[i]번 인덱스를 제외하고 배열의 query[i]번 인덱스 뒷부분을 잘라서 버립니다.
홀수 인덱스에서는 arr에서 query[i]번 인덱스는 제외하고 배열의 query[i]번 인덱스 앞부분을 잘라서 버립니다.
위 작업을 마친 후 남은 arr의 부분 배열을 return 하는 solution 함수를 완성해 주세요.
*/

/*
제한사항
5 ≤ arr의 길이 ≤ 100,000
0 ≤ arr의 원소 ≤ 100
1 ≤ query의 길이 < min(50, arr의 길이 / 2)
query의 각 원소는 0보다 크거나 같고 남아있는 arr의 길이 보다 작습니다.
*/

/*
풀이
0부터 query 길이만큼 반복문
홀수면 erase(0, i - 1)
짝수면 erase(i + 1, erase.end() - 1)
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {

    for(int i = 0; i < query.size(); i++) {
        int a = query[i];
        if(i % 2 == 0) {
            arr.erase(arr.begin() + a + 1, arr.end());
        } else {
            arr.erase(arr.begin(), arr.begin() + a);
        }
    }

    return arr;
}