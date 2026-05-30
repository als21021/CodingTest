/*
문제 설명
정수가 담긴 리스트 num_list가 주어집니다.
num_list의 홀수만 순서대로 이어 붙인 수와 짝수만 순서대로 이어 붙인 수의 합을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
2 ≤ num_list의 길이 ≤ 10
1 ≤ num_list의 원소 ≤ 9
num_list에는 적어도 한 개씩의 짝수와 홀수가 있습니다.
*/

/*
풀이
string이 두 개 있어야겠네
to_string 후 oddString += 해주고

다시 stoi 해서 두 개 더하면 끗
*/

#include <string>
#include <vector>
using namespace std;

int solution(vector<int> num_list) {
    
    string oddString = "";
    string evenString = "";

    for(int i : num_list) {

        if(i % 2 == 0) evenString += to_string(i);
        else oddString += to_string(i);
    }

    return stoi(evenString) + stoi(oddString);
}