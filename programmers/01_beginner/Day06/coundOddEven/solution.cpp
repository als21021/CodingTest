/*
문제 설명
정수가 담긴 리스트 num_list가 주어질 때, num_list의 원소 중 짝수와 홀수의 개수를 담은 배열을 return 하도록 solution 함수를 완성해보세요.
*/

/*
제한사항
1 ≤ num_list의 길이 ≤ 100
0 ≤ num_list의 원소 ≤ 1,000
*/

/*
풀이
반복문으로 배열 처음부터 끝까지 훑으면서 다른 배열 하나 더 만들어서 거기다가 cnt++ 시키면 될듯
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = {0, 0};

    for(int i = 0; i < num_list.size(); i++) {
        if(num_list[i] % 2 == 0)    answer[0]++;
        else    answer[1]++;
    }
    return answer;
}

/*
다른 풀이
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer(2, 0);
    for (int num : num_list) {
        answer[num % 2]++;
    }
    return answer;
}
    
내가 모르는 함수를 많이 썼는데 다음에 더 공부해보자
*/