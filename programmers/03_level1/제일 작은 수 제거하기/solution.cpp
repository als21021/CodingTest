/*
제일 작은 수 제거하기

문제 설명

정수를 저장한 배열, arr 에서 가장 작은 수를 제거한 배열을 리턴하는 함수, solution을 완성해주세요.
단, 리턴하려는 배열이 빈 배열인 경우엔 배열에 -1을 채워 리턴하세요. 예를들어 arr이 [4,3,2,1]인 경우는 [4,3,2]를 리턴 하고, [10]면 [-1]을 리턴 합니다.
제한 조건
arr은 길이 1 이상인 배열입니다.
인덱스 i, j에 대해 i ≠ j이면 arr[i] ≠ arr[j] 입니다.
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) { 

    if(arr.size() == 1) return {-1};

    int minimum = arr[0];
    int index;

    for(int i = 0; i < arr.size(); i++) {

        if(arr[i] < minimum) {
            minimum = arr[i];
            index = i;
        }
    }

    arr.erase(arr.begin() + index, arr.begin() + index);

    return arr;
}

/*
algorithm에

min_element 라는 함수가 있음
min_element(startIterator, endIterator)로 하면 최소값의 iterator가 반환 됨

int min = *min_element(arr.begin(), arr.end()) 로 최소값 찾기
*/