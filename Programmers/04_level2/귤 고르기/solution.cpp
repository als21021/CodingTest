/*
귤 고르기

문제 설명

경화는 과수원에서 귤을 수확했습니다. 경화는 수확한 귤 중 'k'개를 골라 상자 하나에 담아 판매하려고 합니다.
그런데 수확한 귤의 크기가 일정하지 않아 보기에 좋지 않다고 생각한 경화는 귤을 크기별로 분류했을 때 서로 다른 종류의 수를 최소화하고 싶습니다.
예를 들어, 경화가 수확한 귤 8개의 크기가 [1, 3, 2, 5, 4, 5, 2, 3] 이라고 합시다. 경화가 귤 6개를 판매하고 싶다면, 크기가 1, 4인 귤을 제외한 여섯 개의 귤을 상자에 담으면, 귤의 크기의 종류가 2, 3, 5로 총 3가지가 되며 이때가 서로 다른 종류가 최소일 때입니다.
경화가 한 상자에 담으려는 귤의 개수 k와 귤의 크기를 담은 배열 tangerine이 매개변수로 주어집니다. 경화가 귤 k개를 고를 때 크기가 서로 다른 종류의 수의 최솟값을 return 하도록 solution 함수를 작성해주세요.

제한사항
1 ≤ k ≤ tangerine의 길이 ≤ 100,000
1 ≤ tangerine의 원소 ≤ 10,000,000
*/

/*
풀이

일단 정렬을 해주는게 낫겠죠?
#include <algorithm>
sort(tangerine.begin(), tangerine.end());

그리고 나서 어떡하지?

크기가 많은 순으로 다시 정렬해주고 크기 큰 거부터 채워가면 되지 않나

그럼 크기별 개수도 저장을 해줘야겠죠

뭐가 제일 많은지 어떻게 알지

모르겠으니까 배열 새로 만들어서 같은 숫자에서는 원소++ 숫자 바뀌면 다음꺼 원소++ 이런 식으로

다시 정렬 시켜서 k에서 제일 큰 원소 빼고 다 안 빠졌으면 다음 원소 빼고
내림 차순 정렬하고 while(k > 0)으로 하면 될 듯 사이클 돌 때마다 answer++;
*/

#include <algorithm>
#include <vector>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;

    sort(tangerine.begin(), tangerine.end());

    vector<int> count = {1};
    for(size_t i = 1; i < tangerine.size(); i++) {

        if(tangerine[i] == tangerine[i - 1]) count.back()++;
        else count.push_back(1);
    }

    sort(count.begin(), count.end(), greater<int>());

    int i = 0;
    while(k > 0) {
        k -= count[i];
        i++;
        answer++;
    }

    return answer;
}