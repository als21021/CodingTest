/*
문제 설명
어떤 문자열에 대해서 접두사는 특정 인덱스까지의 문자열을 의미합니다.
예를 들어, "banana"의 모든 접두사는 "b", "ba", "ban", "bana", "banan", "banana"입니다.
문자열 my_string과 is_prefix가 주어질 때,
is_prefix가 my_string의 접두사라면 1을, 아니면 0을 return 하는 solution 함수를 작성해 주세요.
*/

/*
제한사항
1 ≤ my_string의 길이 ≤ 100
1 ≤ is_prefix의 길이 ≤ 100
my_string과 is_prefix는 영소문자로만 이루어져 있습니다.
*/

/*
풀이
banana.substr(0, i) 반복문 만들어서 비교
*/

#include <string>
using namespace std;

int solution(string my_string, string is_prefix) {

    int n = my_string.length();
    for(int i = 0; i < n; i ++) {

        if(my_string.substr(0, i) == is_prefix) return 1;
    }

    return 0;
}

/*
다른 답
int solution(string my_string, string is_prefix) {    
    return my_string.substr(0,is_prefix.size()) == is_prefix;
}
*/