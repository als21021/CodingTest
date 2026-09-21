/*
문제 설명
자연수 n이 입력으로 주어졌을 때 만약 n이 짝수이면 "n is even"을, 홀수이면 "n is odd"를 출력하는 코드를 작성해 보세요.
*/

/*
제한사항
1 ≤ n ≤ 1,000
*/

/*
풀이
n % 2 == 0 cout << n is even;
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n % 2 == 0)  cout << n << " is even";
    else cout << n << " is odd";
}

/*
다른 풀이
다른 사람들은 삼항 연산자 좀 잘 쓰던데 난 안 생각이 안 남

cout << n << " is " << (n % 2 == 0)?"even":"odd";
*/