/*
문제 설명
1부터 6까지 숫자가 적힌 주사위가 네 개 있습니다.
네 주사위를 굴렸을 때 나온 숫자에 따라 다음과 같은 점수를 얻습니다.

네 주사위에서 나온 숫자가 모두 p로 같다면 1111 × p점을 얻습니다.
세 주사위에서 나온 숫자가 p로 같고 나머지 다른 주사위에서 나온 숫자가 q(p ≠ q)라면 (10 × p + q)2 점을 얻습니다.
주사위가 두 개씩 같은 값이 나오고, 나온 숫자를 각각 p, q(p ≠ q)라고 한다면 (p + q) × |p - q|점을 얻습니다.
어느 두 주사위에서 나온 숫자가 p로 같고 나머지 두 주사위에서 나온 숫자가 각각 p와 다른 q, r(q ≠ r)이라면 q × r점을 얻습니다.
네 주사위에 적힌 숫자가 모두 다르다면 나온 숫자 중 가장 작은 숫자 만큼의 점수를 얻습니다.
네 주사위를 굴렸을 때 나온 숫자가 정수 매개변수 a, b, c, d로 주어질 때, 얻는 점수를 return 하는 solution 함수를 작성해 주세요.
*/

/*
풀이
sort로 정렬 후 unique 함수로 중복 되는거 정리

*/

#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(int a, int b, int c, int d) {

    vector<int> arr = {a, b, c, d};
    sort(arr.begin(), arr.end());
    a = arr[0];
    b = arr[1];
    c = arr[2];
    d = arr[3];

    //1-6까지 나온 횟수 각각 저장
    vector<int> count = {0};
    for(int x : arr) count[x]++;

    //4개 다 같은 경우
    if(count[arr[0]] == 4) return 1111 * arr[0];

    //3개만 같은 경우
    
}