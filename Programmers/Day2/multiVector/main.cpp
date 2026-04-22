/*
문제 설명
정수 배열 numbers가 매개변수로 주어집니다. numbers의 각 원소에 두배한 원소를 가진 배열을 return하도록 solution 함수를 완성해주세요.
*/

/*
1번째 오답

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for (int i = 0; i < 1000; i++) {
        answer.at(i) = numbers.at(i) * 2;
    }
    return answer;
}

answer의 크기가 정해지지 않았는데 넣으려고 하니까 넣어지지 않음
push_back 사용

마찬가지로 크기가 정해지지 않았음에도 반복문을 1000까지 사용
size 사용
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for (int i = 0; i < numbers.size(); i++) {
        answer.push_back(numbers.at(i) * 2);
    }
    return answer;
}