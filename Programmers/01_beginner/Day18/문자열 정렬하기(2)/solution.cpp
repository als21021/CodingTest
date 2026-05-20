/*
문제 설명
영어 대소문자로 이루어진 문자열 my_string이 매개변수로 주어질 때, my_string을 모두 소문자로 바꾸고 알파벳 순서대로 정렬한 문자열을 return 하도록 solution 함수를 완성해보세요.
*/

/*
제한사항
0 < my_string 길이 < 100
*/

/*
풀이
정렬은 algorithm의 sort로 할건데 이게 문자도 정렬이 됐던가?
tolower로 소문자로 바꿀거임
*/

#include <string>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    string answer;
    for(auto &c : my_string) {
        c = tolower(c);
    }

    sort(my_string.begin(), my_string.end());

    return my_string;
}

//자꾸 앞에서 공부했던 함수 까먹는다