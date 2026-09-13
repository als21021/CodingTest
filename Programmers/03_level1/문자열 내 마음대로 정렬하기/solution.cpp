/*
문자열 내 마음대로 정렬하기

문제 설명

문자열로 구성된 리스트 strings와, 정수 n이 주어졌을 때, 각 문자열의 인덱스 n번째 글자를 기준으로 오름차순 정렬하려 합니다. 예를 들어 strings가 ["sun", "bed", "car"]이고 n이 1이면 각 단어의 인덱스 1의 문자 "u", "e", "a"로 strings를 정렬합니다.

제한 조건
strings는 길이 1 이상, 50이하인 배열입니다. 
strings의 원소는 소문자 알파벳으로 이루어져 있습니다.
strings의 원소는 길이 1 이상, 100이하인 문자열입니다.
모든 strings의 원소의 길이는 n보다 큽니다.
인덱스 1의 문자가 같은 문자열이 여럿 일 경우, 사전순으로 앞선 문자열이 앞쪽에 위치합니다.
*/

/*
풀이

sort() 함수를 활용할건데
비교하는 함수를 새로 만들거임

bool compare(string a, string b, n)

a랑 b의 n번째 요소를 비교 만약 같으면 a와 b의 크기를 비교
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(), strings.end(), [n](string a, string b) {
        if(a[n] == b[n]) return a < b;
        else return a[n] < b[n];        
    });
    return strings;
}

/*
[배운 점] 람다(lambda) 정리

형태: [캡처](매개변수) -> 반환타입 { body }

캡처:
  []    - 아무것도 캡처 안 함
  [n]   - n을 값으로 복사 (원본과 무관, 읽기 전용)
  [&n]  - n을 참조로 캡처 (원본 변경 시 반영, 람다 안에서 수정하면 원본도 바뀜)
  [=]   - 바깥 변수 전부 값으로 캡처
  [&]   - 바깥 변수 전부 참조로 캡처

반환타입은 대부분 생략 가능 (컴파일러가 body 보고 추론)

실체: 컴파일러가 operator()를 가진 익명 클래스(functor)로 변환.
      캡처한 변수는 그 클래스의 멤버 변수가 됨.
      -> sort 등 템플릿 함수 입장에선 그냥 "호출 가능한 객체"로 취급되어 문제없이 동작.

[오늘 실수] compare(n)처럼 함수 "호출 결과"(bool)를 sort에 넘기려 함
  -> sort는 callable 자체를 받아야 하므로 컴파일 에러
  -> 해결: 람다로 n을 캡처해서 넘김

[추가 개선] 매개변수 string a, string b (값 복사) -> const string& a, const string& b 로 변경

sort(strings.begin(), strings.end(), [n](const string& a, const string& b) {
    if (a[n] == b[n]) return a < b;
    return a[n] < b[n];
});
*/