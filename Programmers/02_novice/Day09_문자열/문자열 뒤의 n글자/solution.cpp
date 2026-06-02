/*
문제 설명
문자열 my_string과 정수 n이 매개변수로 주어질 때,
my_string의 뒤의 n글자로 이루어진 문자열을 return 하는 solution 함수를 작성해 주세요.
*/

/*
제한사항
my_string은 숫자와 알파벳으로 이루어져 있습니다.
1 ≤ my_string의 길이 ≤ 1,000
1 ≤ n ≤ my_string의 길이
*/

/*
풀이
append()는 개수로 붙일 수 있어서 이거 쓸거임
*/

#include <string>
using namespace std;

string solution(string my_string, int n) {

    string answer;
    answer.append(my_string, my_string.size() - n, n);
    // answer += my_string.substr(my_string.length() - n, my_string.length() - 1);

    return answer;
}