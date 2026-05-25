/*
문제 설명
머쓱이는 태어난 지 6개월 된 조카를 돌보고 있습니다.
조카는 아직 "aya", "ye", "woo", "ma" 네 가지 발음을 최대 한 번씩 사용해 조합한(이어 붙인) 발음밖에 하지 못합니다.
문자열 배열 babbling이 매개변수로 주어질 때, 머쓱이의 조카가 발음할 수 있는 단어의 개수를 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ babbling의 길이 ≤ 100
1 ≤ babbling[i]의 길이 ≤ 15
babbling의 각 문자열에서 "aya", "ye", "woo", "ma"는 각각 최대 한 번씩만 등장합니다.
즉, 각 문자열의 가능한 모든 부분 문자열 중에서 "aya", "ye", "woo", "ma"가 한 번씩만 등장합니다.
문자열은 알파벳 소문자로만 이루어져 있습니다.
*/

/*
풀이
존나 어려운데 이게 입문이라고?

일단 babbling 순서대로 이게 가능한 발음인지 확인해야겠지

가능하다는건 어떻게 판단할건데

단어 네개니까 그냥 경우의 수 다 만들어버릴까

단어 1개 경우의 수 = 4개
단어 2개 경우의 수 = 6 * 2개
단어 3개 경우의 수 = 4 * 6개
단어 4개 경우의 수 = 4 * 6개
경우의 수 64개
ㅋㅋ;

"aya", "ye", "woo", "ma"
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;

    vector<string> dictionary = {"aya", "ye", "woo", "ma",
        "ayaye", "yewoo", "wooma", "ayawoo", "ayama", "yema",
        "yeaya", "wooye", "mawoo", "wooaya", "maaya", "maye",
        "ayayewoo", "ayawooye", "yeayawoo", "yewooaya", "wooayaye", "wooyeaya",
        "ayayema", "ayamaye", "yeayama", "yemaaya", "maayaye", "mayeaya", 
        "ayawooma", "ayamawoo", "wooayama", "woomaaya", "maayawoo", "mawooaya",
        "yewooma", "yemawoo", "wooyema", "woomaye", "mayewoo", "mawooye",
        "maayayewoo", "maayawooye", "mayeayawoo", "mayewooaya", "mawooayaye", "mawooyeaya",
        "wooayayema", "wooayamaye", "wooyeayama", "wooyemaaya", "woomaayaye", "woomayeaya", 
        "yeayawooma", "yeayamawoo", "yewooayama", "yewoomaaya", "yemaayawoo", "yemawooaya",
        "ayayewooma", "ayayemawoo", "ayawooyema", "ayawoomaye", "ayamayewoo", "ayamawooye"};
        
    for(auto c : babbling) {
        for(auto b : dictionary) {
            if(c == b) answer ++;
        }
    }

    return answer;
}