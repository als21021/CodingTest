/*
문제 설명

문자열 my_string과 정수 배열 indices가 주어질 때,
my_string에서 indices의 원소에 해당하는 인덱스의 글자를 지우고 이어 붙인 문자열을 return 하는 solution 함수를 작성해 주세요.
*/

/*
제한사항
1 ≤ indices의 길이 < my_string의 길이 ≤ 100
my_string은 영소문자로만 이루어져 있습니다
0 ≤ indices의 원소 < my_string의 길이
indices의 원소는 모두 서로 다릅니다.
*/

/*
풀이
my_string 반복문 돌리고
그 안에 indices 이중 반복문 돌려서
indices 안에 없으면 answer에 추가하는 식으로
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";

        for(int i = 0; i < my_string.size(); i++) {
            if(find(indices.begin(), indices.end(), i) == indices.end()) {
                answer.push_back(my_string[i]);
            }
        }

    return answer;
}