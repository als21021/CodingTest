/*
문제 설명
중앙값은 어떤 주어진 값들을 크기의 순서대로 정렬했을 때 가장 중앙에 위치하는 값을 의미합니다. 예를 들어 1, 2, 7, 10, 11의 중앙값은 7입니다. 정수 배열 array가 매개변수로 주어질 때, 중앙값을 return 하도록 solution 함수를 완성해보세요.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {

    for(int i = 0; i < array.size() - 1; i++) {
        for(int i = 0; i < array.size() - 1; i++) {
            if(array[i] > array[i+1]) {
                swap(array[i], array[i+1]);
            }
        }
    }
    
    int answer = array.at(int(array.size()) / 2);
    return answer;
}

/*
새로 알게 된 함수
swap(v[i],v[i+1]); v[i]의 값과 v[i+1]의 값이 서로 바뀌게 됨
temp를 이용해 따로 저장하지 않아도 됨
*/

// 정렬 알고리즘 숙지

int main() {
    vector<int> abc = {-1, 2, 7, 7, 5, 4, -4};
    cout << solution(abc);
}