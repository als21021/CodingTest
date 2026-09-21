//무작위로 K개의 수 뽑기

/*
문제 설명

랜덤으로 서로 다른 k개의 수를 저장한 배열을 만드려고 합니다.
적절한 방법이 떠오르지 않기 때문에 일정한 범위 내에서 무작위로 수를 뽑은 후,
지금까지 나온적이 없는 수이면 배열 맨 뒤에 추가하는 방식으로 만들기로 합니다.
이미 어떤 수가 무작위로 주어질지 알고 있다고 가정하고,
실제 만들어질 길이 k의 배열을 예상해봅시다.
정수 배열 arr가 주어집니다. 
문제에서의 무작위의 수는 arr에 저장된 순서대로 주어질 예정이라고 했을 때,
완성될 배열을 return 하는 solution 함수를 완성해 주세요.
단, 완성될 배열의 길이가 k보다 작으면 나머지 값을 전부 -1로 채워서 return 합니다.
*/

/*
제한사항
1 ≤ arr의 길이 ≤ 100,000
0 ≤ arr의 원소 ≤ 100,000
1 ≤ k ≤ 1,000
*/

/*
풀이
arr에 원소를 unordered_set에 있는지 확인 후 없으면 answer과 unordered_set에 추가, 있으면 넘어가기
그 후 길이가 모자라면 모자란 만큼 -1 추가
*/

#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;

    //unordered_set 변수 만들기
    unordered_set<int> s;
    
    //arr의 원소 반복
    for(int a : arr) {
        
        //원소가 중복됐으면 넘어가기
        if(s.count(a)) continue;
        
        //중복되지 않았으면 unordered_set과 answer에 추가
        else {
            s.insert(a);
            answer.push_back(a);
        }

        //answer의 길이가 k면 끝내기
        if(answer.size() == k) break;
    }

    //answer의 개수가 k보다 작으면
    if(answer.size() < k) {

        //모자란 만큼 -1 넣기
        answer.insert(answer.end(), k - answer.size(), -1);
    }
    
    return answer;
}