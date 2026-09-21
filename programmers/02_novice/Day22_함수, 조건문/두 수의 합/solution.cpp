/*
문제 설명

0 이상의 두 정수가 문자열 a, b로 주어질 때,
a + b의 값을 문자열로 return 하는 solution 함수를 작성해 주세요.

제한사항
1 ≤ a의 길이 ≤ 100,000
1 ≤ b의 길이 ≤ 100,000
a와 b는 숫자로만 이루어져 있습니다.
a와 b는 정수 0이 아니라면 0으로 시작하지 않습니다.
*/

/*
풀이
문자열의 뒤에서부터 더해서 올림수는 carry에다 저장하고 쭉쭉 늘려나갈거임
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string a, string b) {

    string answer;

    //뒤에서부터 더하기 위해 문자열 뒤집기
    reverse(a.begin(), a.end()); reverse(b.begin(), b.end());

    //자릿수 큰 숫자를 기준으로 반복하기 위해 더 큰 수를 a로 설정
    if(a.size() < b.size()) swap(a, b);

    int carry = 0;
    //1의자리부터 반복
    for(int i = 0; i < a.size(); i++) {

        //a, b별 숫자 (근데 b는 더 적을수도 있으니까 따로)
        int numA = a[i] - '0';
        int numB;
        if(i < b.size()) numB = b[i] - '0';
        else numB = 0;

        int sum = numA + numB + carry;
        //answer에 한 자리씩 더해서 넣기
        answer.push_back((sum % 10) + '0');

        //자리 넘어가면 carry 1로
        carry = sum / 10;
    }

    //다 더하고 마지막에 carry 남았으면 끝에 1 더하기
    if(carry == 1) answer.push_back('1');

    //뒤집기
    reverse(answer.begin(), answer.end());

    return answer;
}