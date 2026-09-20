/*
멀리 뛰기

문제 설명

효진이는 멀리 뛰기를 연습하고 있습니다. 효진이는 한번에 1칸, 또는 2칸을 뛸 수 있습니다. 칸이 총 4개 있을 때, 효진이는
(1칸, 1칸, 1칸, 1칸)
(1칸, 2칸, 1칸)
(1칸, 1칸, 2칸)
(2칸, 1칸, 1칸)
(2칸, 2칸)
의 5가지 방법으로 맨 끝 칸에 도달할 수 있습니다. 멀리뛰기에 사용될 칸의 수 n이 주어질 때, 효진이가 끝에 도달하는 방법이 몇 가지인지 알아내, 여기에 1234567를 나눈 나머지를 리턴하는 함수, solution을 완성하세요. 예를 들어 4가 입력된다면, 5를 return하면 됩니다.

제한 사항
n은 1 이상, 2000 이하인 정수입니다.
*/

#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
        if(n == 1) return 1;
    if(n == 2) return 2;
    long long answer = 0;
    vector<long long> jihee(n+1);
    jihee[1] = 1;
    jihee[2] = 2;

    
    for(int i = 3; i <= n; i++) {
        
        jihee[i] = (jihee[i-1] + jihee[i-2]) % 1234567;
    }
    
    return jihee.back();
}

/*
n = 1
result = 1
n = 2
result = 2
n = 3
result = 3
n = 4
result = 5
n = 5
result = 8
1 1 1 1 1

2 1 1 1
1 2 1 1
1 1 2 1
1 1 1 2

2 2 1
2 1 2
1 2 2

for(int i = 0; i <= n / 2; i++)
1의 개수 n - i * 2
2의 개수 i
숫자의 개수 n - i

(n - i)! / ((n - (i * 2))! * i!)
*/
