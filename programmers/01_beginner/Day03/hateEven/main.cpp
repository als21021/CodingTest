/*
문제 설명
정수 n이 매개변수로 주어질 때, n 이하의 홀수가 오름차순으로 담긴 배열을 return하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {

    vector<int> answer;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 1) answer.push_back(i);
    }

    return answer;
}

/*
vector 사용법 숙지 덜 됐음

vector<int> v
v.begin()
v.end()
-> 백터의 시작점, 끝부분+1의 주소값 반환

v.front()
v.back()
-> 백터의 첫번째, 마지막 요소 접근

v.push_back(n)
v.pop_back()
-> 백터의 마지막 요소 추가, 제거

v.insert(i, n)
v.emplace(i, n)
i번째 주소에 n삽입
(emplace는 복사생성자X)


등등 더 있지만 나중에 공부할랭
*/

/*
다른 사람의 풀이
나는 조건문에 i % 2 == 1을 달았지만
for(int i = 1; i <= n; i += 2)
로 반복문을 설정해 홀수만 나오게 할 수 있었음
*/