/*
문제 설명
"*"의 높이와 너비를 1이라고 했을 때, "*"을 이용해 직각 이등변 삼각형을 그리려고합니다. 정수 n 이 주어지면 높이와 너비가 n 인 직각 이등변 삼각형을 출력하도록 코드를 작성해보세요.
*/

/*
제한사항
1 ≤ n ≤ 10
*/

/*
풀이
이중반복문
*/

#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << '*';
        for(int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}

/*
다른 풀이
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        cout << string(i,'*') << endl;
    }
    return 0;
}
    
이중 반복문이 아닌 문자열을 이용하였음
*/