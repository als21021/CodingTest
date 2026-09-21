/*
문제 설명
정수가 들어 있는 배열 num_list가 매개변수로 주어집니다. num_list의 원소의 순서를 거꾸로 뒤집은 배열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ num_list의 길이 ≤ 1,000
0 ≤ num_list의 원소 ≤ 1,000
*/

/*
풀이
반복문 만들어놓고 배열크기 - 인덱스로 해서 자리 바꿔주면 되지 않을까
ㄴㄴ 새 백터의 끝부분에다가 뒤에서부터 쭉쭉 넣는게 더 나을듯
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for(int i = num_list.size() - 1; i >= 0; i--) {
        answer.push_back(num_list[i]);
    }
    return answer;
}

/*
#include <algorithm>

reverse() 라는 함수도 있음
배열, 문자열들을 뒤집을 수 있음
reverse(array.front(), array.end());
배열의 처음부터 끝까지 다 뒤집음
reverse(b+1, b+4);
배열 b의 두번째 요소부터 5번째 요소까지 뒤집음 
*/