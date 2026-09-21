/*
문제 설명
머쓱이는 행운의 숫자 7을 가장 좋아합니다. 정수 배열 array가 매개변수로 주어질 때, 7이 총 몇 개 있는지 return 하도록 solution 함수를 완성해보세요.
*/

/*
제한사항
1 ≤ array의 길이 ≤ 100
0 ≤ array의 원소 ≤ 100,000
*/

/*
반복문 돌려서 원소가 7이면 answer++
*/

/*
첫 오답
숫자가 7인 개수를 새는게 아니라
77 -> 7이 2번 들어감
이렇게까지 세는거였음
어쩐지 쉽더라

#include <vector>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(auto n : array) {
        if(n == 7) answer++;
    }
    return answer;
}
*/

/*
풀이
그러면 숫자를 문자로 바꿔서 '7'일 때 answer++ 하는 방법으로 풀어야 할 듯
tostring 활용할거임
*/

#include <vector>
#include <string>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    vector<string> my_string;
    for(int i = 0; i < array.size(); i++) {
        my_string.push_back(to_string(array[i]));
    }
    
    for(int i = 0; i < my_string.size(); i++) {
        for(auto a : my_string[i]) {
            if(a == '7')    answer++;
        }
    }

    return answer;
}