//배열의 원소만큼 추가하기

/*
문제 설명

아무 원소도 들어있지 않은 빈 배열 X가 있습니다.
양의 정수 배열 arr가 매개변수로 주어질 때,
arr의 앞에서부터 차례대로 원소를 보면서 원소가 a라면 X의 맨 뒤에 a를 a번 추가하는 일을 반복한 뒤의 배열 X를 return 하는 solution 함수를 작성해 주세요.
*/

/*
제한사항
1 ≤ arr의 길이 ≤ 100
1 ≤ arr의 원소 ≤ 100
*/

/*
풀이
arr 반복
이중 반복 arr[0]만큼
push_back(arr[0])
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(int a : arr) {
        for(int i = 0; i < a; i++) {
            answer.push_back(a);
        }
    }

    return answer;
}