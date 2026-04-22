/*
문제 설명
첫 번째 분수의 분자와 분모를 뜻하는 numer1, denom1, 두 번째 분수의 분자와 분모를 뜻하는 numer2, denom2가 매개변수로 주어집니다. 두 분수를 더한 값을 기약 분수로 나타냈을 때 분자와 분모를 순서대로 담은 배열을 return 하도록 solution 함수를 완성해보세요.
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    int numer3 = numer1 * denom2 + numer2 * denom1;
    int denom3 = denom1 * denom2;

    for (int i = (numer3 >= denom3)? denom3:numer3; i >= 1; i--) {  //최소공배수 구하기
        if((numer3 % i == 0)&(denom3 % i ==0)) {
            numer3 = numer3 / i;
            denom3 = denom3 / i;
            break;
        }
    }
    vector<int> answer = {numer3, denom3};
    return answer;
}


// 최소공배수를 구할 때 분자 분모보다 큰 수를 찾기 위해 16번 라인을 작성했지만 min() 함수를 사용하면 더 쉽게 사용할 수 있었음