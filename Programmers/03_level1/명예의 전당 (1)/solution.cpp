/*
명예의 전당 (1)

문제 설명

"명예의 전당"이라는 TV 프로그램에서는 매일 1명의 가수가 노래를 부르고, 시청자들의 문자 투표수로 가수에게 점수를 부여합니다.
매일 출연한 가수의 점수가 지금까지 출연 가수들의 점수 중 상위 k번째 이내이면 해당 가수의 점수를 명예의 전당이라는 목록에 올려 기념합니다.
즉 프로그램 시작 이후 초기에 k일까지는 모든 출연 가수의 점수가 명예의 전당에 오르게 됩니다.
k일 다음부터는 출연 가수의 점수가 기존의 명예의 전당 목록의 k번째 순위의 가수 점수보다 더 높으면, 출연 가수의 점수가 명예의 전당에 오르게 되고 기존의 k번째 순위의 점수는 명예의 전당에서 내려오게 됩니다.
이 프로그램에서는 매일 "명예의 전당"의 최하위 점수를 발표합니다. 예를 들어, k = 3이고, 7일 동안 진행된 가수의 점수가 [10, 100, 20, 150, 1, 100, 200]이라면, 명예의 전당에서 발표된 점수는 아래의 그림과 같이 [10, 10, 10, 20, 20, 100, 100]입니다.

명예의 전당 목록의 점수의 개수 k, 1일부터 마지막 날까지 출연한 가수들의 점수인 score가 주어졌을 때, 매일 발표된 명예의 전당의 최하위 점수를 return하는 solution 함수를 완성해주세요.

제한사항
3 ≤ k ≤ 100
7 ≤ score의 길이 ≤ 1,000
0 ≤ score[i] ≤ 2,000
*/

/*
풀이

발표 점수는 score까지 명예의 전당에 반영을 한 후에 꼴지를 추가해야 함

명예의 전당의 길이가 k보다 클 때와 아닐 때로 나눠서 짜는게 나을까

명예의 전당 배열을 따로 만들고
vector<int> honor;

honor를 k보다 1 크게 만들어서
매 score를 honor[k + 1]에 저장하고 정렬한 뒤에 honor[k]를 answer에 push하면 k + 1에 있는 숫자도 매 번 버릴 수 있고 괜찮은듯

honor가 꽉 차지 않았을 때는
그냥 push_back하고 sort하고 back을 answer에 push
*/

#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> honor(k + 1);

    for(int i = 0; i < score.size(); i++) {
        if(i >= k) {
            honor[k] = score[i];
            sort(honor.begin(), honor.end(), greater<int>());
            answer.push_back(honor[k - 1]);
        } else {
            honor[i] = score[i];
            sort(honor.begin(), honor.end(), greater<int>());
            answer.push_back(honor[i]);
        }
    }

    return answer;
}