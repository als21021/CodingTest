/*
문제 설명
정수가 담긴 배열 numbers와 문자열 direction가 매개변수로 주어집니다. 배열 numbers의 원소를 direction방향으로 한 칸씩 회전시킨 배열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
3 ≤ numbers의 길이 ≤ 20
direction은 "left" 와 "right" 둘 중 하나입니다.
*/

/*
풀이
걍 하나씩 빼거나 더해서 넣으면 되는거 아님?
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer(numbers.size());

    if(direction == "right") {
        int temp = numbers[numbers.size()-1];
        for(int i = 1; i < numbers.size(); i++) {
            answer[i] = numbers[i-1];
        }
        answer[0] = temp;
    } else {
        int temp = numbers[0];
        for(int i = 0; i < numbers.size()-1; i++) {
            answer[i] = numbers[i+1];
        }
        answer[numbers.size()-1] = temp;
    }
    return answer;
}