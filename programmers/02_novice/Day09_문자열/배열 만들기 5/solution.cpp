/*
문제 설명
문자열 배열 intStrs와 정수 k, s, l가 주어집니다.
intStrs의 원소는 숫자로 이루어져 있습니다.

배열 intStrs의 각 원소마다 s번 인덱스에서 시작하는 길이 l짜리 부분 문자열을 잘라내 정수로 변환합니다.
이때 변환한 정수값이 k보다 큰 값들을 담은 배열을 return 하는 solution 함수를 완성해 주세요.
*/

/*
제한사항
0 ≤ s < 100
1 ≤ l ≤ 8
10l - 1 ≤ k < 10l
1 ≤ intStrs의 길이 ≤ 10,000
s + l ≤ intStrs의 원소의 길이 ≤ 120
*/

/*
풀이
문자열에서 s-l까지 추출
substr() 사용하면 부분 문자 반환 가능
추출한 문자열을 stoi로 정수로 바꾼 후
k보다 크면 배열에 추가
*/

#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {

    vector<int> answer;
    for(auto str : intStrs) {

        int toInt = stoi(str.substr(s, l));
        if(toInt > k) answer.push_back(toInt);
    }

    return answer;
}