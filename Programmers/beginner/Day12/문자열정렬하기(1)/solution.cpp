/*
문제 설명
문자열 my_string이 매개변수로 주어질 때, my_string 안에 있는 숫자만 골라 오름차순 정렬한 리스트를 return 하도록 solution 함수를 작성해보세요.
*/

/*
제한사항
1 ≤ my_string의 길이 ≤ 100
my_string에는 숫자가 한 개 이상 포함되어 있습니다.
my_string은 영어 소문자 또는 0부터 9까지의 숫자로 이루어져 있습니다. - - -
*/

/*
풀이
비교는 문자열로 해놓고 0-9까지 조건문 다 만들어서 벡터에 추가시키기
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(int i = 0; i < my_string.length(); i++) {
        if((my_string[i] <= 57)&&(my_string[i] >= 48)) {
            answer.push_back(my_string[i] - 48);
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}

/*
범위기반 for문

for(데이터 타입 변수명 : 데이터 리스트)

for(char c : my_string) {
    if(c >= 48 || c <= 57) answer.push_back(c-48);
}
sort(answer.begin(), answer.end());
return answer;

장점 : 간단함
단점 : index가 없음, 배열의 요소를 변경할 수 없음
*/