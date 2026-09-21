//문자열 묶기

/*
문제 설명

문자열 배열 strArr이 주어집니다.
strArr의 원소들을 길이가 같은 문자열들끼리 그룹으로 묶었을 때 가장 개수가 많은 그룹의 크기를 return 하는 solution 함수를 완성해 주세요.
*/

/*
제한사항
1 ≤ strArr의 길이 ≤ 100,000
1 ≤ strArr의 원소의 길이 ≤ 30
strArr의 원소들은 알파벳 소문자로 이루어진 문자열입니다.
*/

/*
풀이
문자열들의 길이를 담은 배열을 새로 만들어서 정렬시키기
원소의 길이는 30까지만 있으니까 길이가 30인 배열을 하나 만들어서
i = 문자열들의 길이 countArr[i] 에다가 길이가 i+1인 문자열의 개수를 넣어놓고
lengthArr의 요소 중 가장 큰 값의 i를 리턴하면 정답
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {

    //문자의 길이별로 strArr에 몇 개씩 들어있는지 담아줄 배열
    vector<int> countArr(31);

    //길이가 나올 때마다 자기 위치에 +1
    for(string str : strArr) {
        countArr[str.size()]++;
    }

    //가장 큰 요소의 이터레이터 - 시작 이터레이터 == 가장 큰 요소의 인덱스
    return *max_element(countArr.begin(), countArr.end());
}