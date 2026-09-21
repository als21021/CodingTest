/*
문제 설명
정수 배열 numbers가 매개변수로 주어집니다. numbers의 원소 중 두 개를 곱해 만들 수 있는 최댓값을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
0 ≤ numbers의 원소 ≤ 10,000
2 ≤ numbers의 길이 ≤ 100
*/

/*
풀이
numbers를 반복문으로 훑어 최댓값과 그 다음 값을 저장하기
가장 큰 값 변수에 넣고
만약 밀리면 두 번째 변수에 저장하면 될 듯

그리고 그 두개 곲하면 끝
*/

#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int choidae = 0;
    int nextChoidae = 0;
    for(int i = 0; i < numbers.size(); i++) {
        if(numbers[i] > choidae) {
            nextChoidae = choidae;
            choidae = numbers[i];
        } else if(numbers[i] > nextChoidae) {
            nextChoidae = numbers[i];
        }
    }
    return choidae * nextChoidae;
}

/*
다른 풀이
정렬 활용하면 되는데 또 까먹었음
#include <algorithm>
sort(numbers.begin(), numbers.end());
*/