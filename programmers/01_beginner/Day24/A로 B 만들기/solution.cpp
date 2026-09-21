/*
문제 설명
문자열 before와 after가 매개변수로 주어질 때,
before의 순서를 바꾸어 after를 만들 수 있으면 1을,
만들 수 없으면 0을 return 하도록 solution 함수를 완성해보세요.
*/

/*
제한사항
0 < before의 길이 == after의 길이 < 1,000
before와 after는 모두 소문자로 이루어져 있습니다.
*/

/*
문자열 뒤집기 어떻게 함?
그냥 문자열 새로 하나 더 만들어야 하나
이것도 함수 있을거 같은데
아 뒤집는게 아니라 순서 바꾸기었네
그럼 걍 정렬 시켜서 똑같으면 1로 하면 될듯
*/

#include <string>
#include <algorithm>
using namespace std;

int solution(string before, string after) {

    sort(before.begin(), before.end());
    sort(after.begin(), after.end());

    if(before == after) return 1;
    else return 0;
}