/*
문제 설명
최빈값은 주어진 값 중에서 가장 자주 나오는 값을 의미합니다. 정수 배열 array가 매개변수로 주어질 때, 최빈값을 return 하도록 solution 함수를 완성해보세요. 최빈값이 여러 개면 -1을 return 합니다.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    //오름차순 정리
    for(int j = 0; j < array.size(); j++) {
        for(int i = 0; i < array.size() - 1; i++) {
            if(array[i] > array[i+1]) swap(array[i], array[i+1]);
        }
    }
    //같은 수 더하기
    int count[2] = {0, 0};
    for(int i = 0; i < array.size(); i++) {
        //전의 수와 같으면 넘기기
        /*
        if(array[i] == array[i-1]) continue;
        array의 범위를 벗어난 오답
        */
        if(i > 0 && array[i] == array[i-1]) continue;
        for(int j = 0; j < array.size(); j++) {
            if(array[i] == array[j]) count[0]++;
        }
        if(count[0] > count[1]) {
            count[1] = count[0];
            answer = array[i];
        } else if(count[0] == count[1]) answer = -1;
        count[0] = 0;
    }

    return answer;
}

int main() {
    vector<int> array = {1, 1, 2, 2};
    cout << solution(array);
}

/*
정렬을 쉽게 할 수 있는 sort 함수 공부하기

sort(a, a+10)
a부터 a+10까지 정렬해줌 (변수, 변수+주소값)


bool compare(int a, int b) {
    return a > b;
}
sort(a, a+10, compare)
이 경우 왼쪽 값이 오른쪽 값보다 더 크게 정렬되게 됨
즉 내림차순 정리 가능
*/

/*
std::map 자료구조 정리도 있지만 나중에 공부할랭
*/