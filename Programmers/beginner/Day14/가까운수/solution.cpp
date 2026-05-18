/*
문제 설명
정수 배열 array와 정수 n이 매개변수로 주어질 때, array에 들어있는 정수 중 n과 가장 가까운 수를 return 하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ array의 길이 ≤ 100
1 ≤ array의 원소 ≤ 100
1 ≤ n ≤ 100
가장 가까운 수가 여러 개일 경우 더 작은 수를 return 합니다.
*/

/*
풀이
인덱스 0부터 array.size()까지 반복문 돌려서 n에서 뺀 수가 작을수록 answer에 저장해가면 될듯
*/

#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer;
    int answerMinusN = 100;
    for(int i = 0; i < array.size(); i++) {
        if(array[i] == n) {
            return n;
        } else if(array[i] < n) {
            if(n - array[i] <= answerMinusN) {
                answerMinusN = n - array[i];
                answer = array[i];
            }    
        } else {
            if(array[i] - n < answerMinusN) {
                answerMinusN = array[i] - n;
                answer = array[i];
            }  
        }
    }
    return answer;
}

/*
절대값
int abs(int num);
long labs(long num);
double fabs(double num);
*/