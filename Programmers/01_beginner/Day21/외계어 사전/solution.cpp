/*
문제 설명
PROGRAMMERS-962 행성에 불시착한 우주비행사 머쓱이는 외계행성의 언어를 공부하려고 합니다.
알파벳이 담긴 배열 spell과 외계어 사전 dic이 매개변수로 주어집니다.
spell에 담긴 알파벳을 한번씩만 모두 사용한 단어가 dic에 존재한다면 1, 존재하지 않는다면 2를 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
spell과 dic의 원소는 알파벳 소문자로만 이루어져있습니다.
2 ≤ spell의 크기 ≤ 10
spell의 원소의 길이는 1입니다.
1 ≤ dic의 크기 ≤ 10
1 ≤ dic의 원소의 길이 ≤ 10
spell의 원소를 모두 사용해 단어를 만들어야 합니다.
spell의 원소를 모두 사용해 만들 수 있는 단어는 dic에 두 개 이상 존재하지 않습니다.
dic과 spell 모두 중복된 원소를 갖지 않습니다.
*/

/*
풀이
그니까 dic의 원소가 spell에 있는 원소 합친거면 되는건데
우선 dic에 있는지 확인해야 하니까 반복문 돌려야겠지
dic[0]이 spell의 원소들로 이루어져 있는지 어떻게 확인하지
dic[0][0]이게 되나?
일단 dic[i].size() == spell.size() 이거 해버릴까
dic[i][j] == spell[k] 같으면 숫자 더해서 temp == spell.size() 면 return 1;
개병신 코드일거 같은데 일단 해볼게용
*/

/*
내 오답
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    
    //dic 탐색 반복문
    for(int i = 0; i < dic.size(); i++) {

        //길이가 다르면 전부 한 번씩 사용할 수 없기 때문에 유기
        if(dic[i].size() != spell.size())   continue;

        //dic의 철자 탐색 반복문
        for(int j = 0; j < dic[i].size(); j++) {

            //스펠링이 같으면 더할 변수
            int temp;

            //spell 탐색 반복문
            for(int k = 0; k < spell.size(); k++) {

                //스펠링이 같은지 확인(dic[i][j]는 char이고 spell은 string이라서 형변환)
                if(to_string(dic[i][j]) == spell[k])    temp++;
            }

            //temp와 spell.size()가 같으면 한 번씩 사용한 단어이므로 return 1;
            if(temp == spell.size())    return 1;
        }
    }

    //다 돌았는데 찾지 못했으면 없는것이므로
    return 2;
}

c++에서 char을 to_string으로 감싸면 아스키코드인 "97" 이런 식으로 변환됨
temp 초기화 시키는거 깜빡함
j가 끝나면 temp와 spell.size()를 확인해야 하는데 반복문 안에 넣어버렸음
*/

/*
내 오답
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    
    //dic 탐색 반복문
    for(int i = 0; i < dic.size(); i++) {

        //길이가 다르면 전부 한 번씩 사용할 수 없기 때문에 유기
        if(dic[i].size() != spell.size())   continue;

        //스펠링이 같으면 더할 함수
        int temp = 0;

        //dic의 철자 탐색 반복문
        for(int j = 0; j < dic[i].size(); j++) {

            //spell 탐색 반복문
            for(int k = 0; k < spell.size(); k++) {

                //스펠링이 같은지 확인(dic[i][j]는 char이고 spell은 string이라서 형변환)
                //spell[k][0]으로 하면 char이 됨
                if(dic[i][j] == spell[k][0]) {
                    temp++;
                    //찾았으니 해당 스펠링 탐색 중지
                    break;
                }
            }
        }

        //temp와 spell.size()가 같으면 한 번씩 사용한 단어이므로 return 1;
        if(temp == spell.size())    return 1;
    }

    //다 돌았는데 찾지 못했으면 없는것이므로
    return 2;
}
dic 안에 같은 철자가 반복해서 들어가있는 경우를 걸러내지 못함
dic 안에 spell이 있나를 찾는게 아닌
spell의 철자가 dic에 있나를 찾아야함
즉 반복문에 순서를 변경해야 됨
근데 이 알고리즘은 답이 없어서 정렬해서 찾는 알고리즘으로 바꿀거임
*/

//sort 사용을 위해 추가
#include <algorithm>
#include <string>
#include <vector>


using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    // 1. spell의 알파벳들을 하나의 문자열로 합치기
    string target = "";
    for (const string& s : spell) {
        target += s;
    }
    
    // 2. 알파벳 순으로 정렬 (예: "z", "d", "x" -> "dxz")
    sort(target.begin(), target.end());

    // 3. dic의 단어들과 비교
    for (string word : dic) {
        // 길이가 같을 때만 검사
        if (word.size() == target.size()) {
            // 원본 단어를 망치지 않게 복사한 뒤 정렬
            string sorted_word = word;
            sort(sorted_word.begin(), sorted_word.end());
            
            // 정렬된 두 문자열이 같으면 아나그램(구성 알파벳이 동일)이라는 뜻!
            if (sorted_word == target) {
                return 1;
            }
        }
    }

    return 2;
}