/*
문제 설명
덧셈, 뺄셈 수식들이 'X [연산자] Y = Z' 형태로 들어있는 문자열 배열 quiz가 매개변수로 주어집니다. 수식이 옳다면 "O"를 틀리다면 "X"를 순서대로 담은 배열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
연산 기호와 숫자 사이는 항상 하나의 공백이 존재합니다. 단 음수를 표시하는 마이너스 기호와 숫자 사이에는 공백이 존재하지 않습니다.
1 ≤ quiz의 길이 ≤ 10
X, Y, Z는 각각 0부터 9까지 숫자로 이루어진 정수를 의미하며, 각 숫자의 맨 앞에 마이너스 기호가 하나 있을 수 있고 이는 음수를 의미합니다.
X, Y, Z는 0을 제외하고는 0으로 시작하지 않습니다.
-10,000 ≤ X, Y ≤ 10,000
-20,000 ≤ Z ≤ 20,000
[연산자]는 + 와 - 중 하나입니다.
*/

/*
풀이
'문자열 계산하기' 문제와 비슷하게 풀면 될듯
stringstream을 이용하여 문자열을 공백 단위로 뽑아준 후 마지막 z와 동일하면 o 아님 x 이런식으로
*/

#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;

    for(int i = 0; i < quiz.size(); i++) {
        stringstream ss(quiz[i]);
        int sum = 0;
        ss >> sum;

        char op;
        int y;
        int quizSum;

        while(ss >> op >> y) {
            if(op == '+')   sum +=y;
            else    sum -= y;
        }
        
        ss >> quizSum;
        if(quizSum == sum)  answer.push_back("O");
        else    answer.push_back("X");
    }

    return answer;
}