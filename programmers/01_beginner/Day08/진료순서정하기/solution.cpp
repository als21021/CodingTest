/*
문제 설명
외과의사 머쓱이는 응급실에 온 환자의 응급도를 기준으로 진료 순서를 정하려고 합니다. 정수 배열 emergency가 매개변수로 주어질 때 응급도가 높은 순서대로 진료 순서를 정한 배열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
중복된 원소는 없습니다.
1 ≤ emergency의 길이 ≤ 10
1 ≤ emergency의 원소 ≤ 100
*/

/*
풀이
배열의 원소가 클 수록 우선으로 진료를 받아야함
정렬 알고리즘 활용해서 처음부터 끝까지 쭉 비교하면서 본인보다 더 큰 수가 있을 때마다 cnt++ 해볼까
*/

#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    for(int i = 0; i < emergency.size(); i++) {
        int count = 0;
        for(int j = 0; j < emergency.size(); j++) {
            if(emergency[i] <= emergency[j]) {
                count++;
            }
        }
        answer.push_back(count);
    }
    return answer;
}