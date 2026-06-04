/*
문제 설명
문자열 my_string과 정수 n이 매개변수로 주어질 때, my_string의 앞의 n글자로 이루어진 문자열을 return 하는 solution 함수를 작성해 주세요.
*/

/*
제한사항
my_string은 숫자와 알파벳으로 이루어져 있습니다.
1 ≤ my_string의 길이 ≤ 1,000
1 ≤ n ≤ my_string의 길이
*/

/*
풀이
my_string의 0부터 n까지만 return하면 됨
substr 사용
*/

#include <string>
using namespace std;

string solution(string my_string, int n) {
    return my_string.substr(0, n);
}