/*
문제 설명
문자열 s가 매개변수로 주어집니다. s에서 한 번만 등장하는 문자를 사전 순으로 정렬한 문자열을 return 하도록 solution 함수를 완성해보세요. 한 번만 등장하는 문자가 없을 경우 빈 문자열을 return 합니다.
*/

/*
제한사항
0 < s의 길이 < 1,000
s는 소문자로만 이루어져 있습니다.
*/

/*
풀이
저번에 중복된 문자 제거 문제에서 unorder_set을 사용해서 등장했던 문자를 저장했었는데 그거 활용하면 될듯
*/

#include <string>
#include <vector>
using namespace std;

string solution(string s) {
    string answer;
    vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
                                'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
                            'y', 'z'};
    for(char c : alphabet) {
        int n = 0;
        for(char d : s) {
            if(c == d) {
                n++;
            }  
        }
        if(n == 1)  answer += c;
    }
    return answer;
}