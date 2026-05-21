/*
문제 설명
머쓱이는 학교에서 키 순으로 줄을 설 때 몇 번째로 서야 하는지 궁금해졌습니다. 머쓱이네 반 친구들의 키가 담긴 정수 배열 array와 머쓱이의 키 height가 매개변수로 주어질 때, 머쓱이보다 키 큰 사람 수를 return 하도록 solution 함수를 완성해보세요.
*/

/*
제한사항
1 ≤ array의 길이 ≤ 100
1 ≤ height ≤ 200
1 ≤ array의 원소 ≤ 200
*/

/*
풀이
방금 전에 했던 count_if 쓰면 되는거 아님?
*/

/*
어떻게 쓰는지 모르겠다

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = count_if(array.begin(), array.end(), isTaller) {
        if()
    }
}
*/

#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for(auto n : array) {
        if(n > height)  answer++;
    }
    return answer;
}