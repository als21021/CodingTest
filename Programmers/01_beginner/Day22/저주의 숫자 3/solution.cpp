/*
문제 설명
3x 마을 사람들은 3을 저주의 숫자라고 생각하기 때문에 3의 배수와 숫자 3을 사용하지 않습니다. 3x 마을 사람들의 숫자는 다음과 같습니다.

10진법	3x 마을에서 쓰는 숫자	10진법	3x 마을에서 쓰는 숫자
1           	1	        6	        8
2	            2	        7	        10
3           	4	        8       	11
4	            5	        9	        14
5           	7	        10	        16
정수 n이 매개변수로 주어질 때, n을 3x 마을에서 사용하는 숫자로 바꿔 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ n ≤ 100
*/

/*
풀이
11  17
12  19
13  20
14  22
15  25
어차피 n이 100까지밖에 안 가니까 n까지 반복문 돌려서 answer++ 하는데 3의 배수나 3이 들어갈 때 answer++ 한 번 더 해주면 될 듯
to_string(i).find('3');
이렇게 하면 3 찾아지려나
*/

#include <iostream>
#include <string>

using namespace std;

int solution(int n) {
    int answer = 0;

    //n까지 answer를 늘려줄 반복문
    for(int i = 1; i <= n; i++) {

        //일단 answer는 i와 함께 늘어나야 함
        answer++;

        //3의 배수거나 '3'이 들어가면 answer를 한 번 더 더해줄거임
        while(answer % 3 == 0 || to_string(answer).find('3') != string::npos) {
            answer++;
        }
        
    }
    
    return answer;
}

int main() {
    cout << solution(15);
}

/*
std::string::find()
얘는 값을 찾지 못하면 0을 반환하는게 아니라
string::npos를 반환하기 때문에
가정문이 false라고 인지하지 못함
*/

/*
가정문으로 answer을 더해주게 되면
29, 30, 31과 같은 상황일 때 연속으로 더해줄 수 없음
저 조건에 부합할 때까지 계속 더해줄 반복문 필요
*/