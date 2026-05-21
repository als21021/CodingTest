/*
문제 설명
문자열 my_str과 정수 n이 매개변수로 주어질 때, my_str을 길이 n씩 잘라서 저장한 배열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ my_str의 길이 ≤ 100
1 ≤ n ≤ my_str의 길이
my_str은 알파벳 소문자, 대문자, 숫자로 이루어져 있습니다.
*/

/*
풀이

*/

#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    for (int i = 0; i < my_str.length(); i += n) {
        answer.push_back(my_str.substr(i, n));
    }
    
    return answer;
}

/*
string의 substr 함수를 새로 공부
substr(pos, count);
문자열의 pos번째 문자부터 count 길이 만큼의 문자열을 리턴함
*/