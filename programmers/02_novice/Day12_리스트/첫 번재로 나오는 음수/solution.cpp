/*문제 설명

정수 리스트 num_list가 주어질 때,
첫 번째로 나오는 음수의 인덱스를 return하도록 solution 함수를 완성해주세요.
음수가 없다면 -1을 return합니다.
*/

/*
제한사항
5 ≤ num_list의 길이 ≤ 100
-10 ≤ num_list의 원소 ≤ 100
*/

/*
풀이
반복문 돌리다가 음수 나오면 return
반복문 끝나고 return -1
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] < 0)
            return i;
    }

    return -1;
}