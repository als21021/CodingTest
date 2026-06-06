/*
문제 설명

정수 배열 arr와 2개의 구간이 담긴 배열 intervals가 주어집니다.
intervals는 항상 [[a1, b1], [a2, b2]]의 꼴로 주어지며 각 구간은 닫힌 구간입니다.
닫힌 구간은 양 끝값과 그 사이의 값을 모두 포함하는 구간을 의미합니다.
이때 배열 arr의 첫 번째 구간에 해당하는 배열과 두 번째 구간에 해당하는 배열을 앞뒤로 붙여 새로운 배열을 만들어 return 하는 solution 함수를 완성해 주세요.
*/

/*
제한사항
1 ≤ arr의 길이 ≤ 100,000
1 ≤ arr의 원소 < 100
1 ≤ a1 ≤ b1 < arr의 길이
1 ≤ a2 ≤ b2 < arr의 길이
*/

/*
풀이
반복문 두 번 해서 answer에 추가
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals)
{
    vector<int> answer;
    for (int i = intervals[0][0]; i <= intervals[0][1]; i++)
    {
        answer.push_back(arr[i]);
    }
    for (int i = intervals[1][0]; i <= intervals[1][1]; i++)
    {
        answer.push_back(arr[i]);
    }
    return answer;
}