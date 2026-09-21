/*
문제 설명
문자열 my_string이 매개변수로 주어집니다. my_string에서 중복된 문자를 제거하고 하나의 문자만 남긴 문자열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ my_string ≤ 110
my_string은 대문자, 소문자, 공백으로 구성되어 있습니다.
대문자와 소문자를 구분합니다.
공백(" ")도 하나의 문자로 구분합니다.
중복된 문자 중 가장 앞에 있는 문자를 남깁니다.
*/

/*
풀이
중복 제거하는 함수 얼마전에 공부했었는데 뭐였더라
day12 소인수분해 문제에서 썼었음
unique()함수를 통해 중복 뒤로 미룰 수 있었음
*/

/*
내 오답
#include <iostream>
#include <string>

using namespace std;

string solution(string my_string) {
    my_string.erase(unique(my_string.begin(), my_string.end()), my_string.end());
    return my_string;
}

int main() {
    string my_string = "people";
    cout << solution(my_string);
}

unique 함수는 인접한 중복 요소만 제거하는거였음
하지만 이 문제에서는 순서가 바뀌면 안되기에 unique 함수는 적절하지 않음
*/

/*
풀이
중복 여부를 빠르게 확인할 수 있는 unordered_set 헤더를 사용할거임

unordered_set<char> seen; //등장했던 문자를 기억하는 기억장치

seen.find(c) == seen.end(); //기억장치에 c가 없다는 뜻
seen.insert(c); //기억장치에 c를 추가

find() 함수는 해당 문자가 있는지 찾고 그 문자가 있는 곳의 주소를 반환함
0과 1이 아닌 주소를 반환하기에 빠른 수정이 가능해서 용이함

auto it = seen.find('p');
if (it != seen.end()) {
    seen.erase(it);
}
*/

#include <string>
#include <unordered_set>

using namespace std;

string solution(string my_string) {
    unordered_set<char> temp;
    string answer;
    for(auto c : my_string) {
        if(temp.find(c) == temp.end()) {
            temp.insert(c);
            answer += c;
        }
    }

    return answer;
}