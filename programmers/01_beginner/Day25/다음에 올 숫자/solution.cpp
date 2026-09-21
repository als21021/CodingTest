/*
문제 설명
등차수열 혹은 등비수열 common이 매개변수로 주어질 때,
마지막 원소 다음으로 올 숫자를 return 하도록 solution 함수를 완성해보세요.
*/

/*
제한사항
2 < common의 길이 < 1,000
-1,000 < common의 원소 < 2,000
common의 원소는 모두 정수입니다.
등차수열 혹은 등비수열이 아닌 경우는 없습니다.
등비수열인 경우 공비는 0이 아닌 정수입니다.
*/

/*
풀이
우선 등비수열인지 등차수열인지부터 찾아야 할 듯

원소가 무조건 3개는 있으니까
if((a[0] - a[1]) == (a[1] - a[2]))  등차
if((a[0] / a[1]) == (a[1] / a[2]))  등비

등차면 마지막 원소에 공차 더하고
등비면 마지막 원소에 공비 곱하고
끗!
*/

#include <vector>
using namespace std;

int solution(vector<int> common) {

    int answer = 0;

    if((common[0] - common[1]) == (common[1] - common[2])) {
        answer = common[common.size() - 1] + (common[1] - common[0]);
    } else if((common[0] / common[1]) == (common[1] / common[2])) {
        answer = common[common.size() - 1] * (common[1] / common[0]);
    }

    return answer;
}

//common[common.size() - 1]     보다는 common.back() 이 더 좋을듯