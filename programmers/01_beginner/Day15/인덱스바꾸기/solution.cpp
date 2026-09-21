/*
문제 설명
문자열 my_string과 정수 num1, num2가 매개변수로 주어질 때, my_string에서 인덱스 num1과 인덱스 num2에 해당하는 문자를 바꾼 문자열을 return 하도록 solution 함수를 완성해보세요.
*/

/*
제한사항
1 < my_string의 길이 < 100
0 ≤ num1, num2 < my_string의 길이
my_string은 소문자로 이루어져 있습니다.
num1 ≠ num2
*/

/*
풀이
배열 위치 바꾸는 함수 있었음
*/

/*
내 정답
#include <vector>
#include <string>
using namespace std;

string solution(string my_string, int num1, int num2) {
    char c = my_string[num1];
    my_string[num1] = my_string[num2];
    my_string[num2] = c;
    return my_string;
}
*/

//swap();
#include <vector>
#include <string>
using namespace std;

string solution(string my_string, int num1, int num2) {
    swap(my_string[num1], my_string[num2]);
    return my_string;
}