/*
문제 설명
문자열 my_string이 매개변수로 주어질 때, 대문자는 소문자로 소문자는 대문자로 변환한 문자열을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ my_string의 길이 ≤ 1,000
my_string은 영어 대문자와 소문자로만 구성되어 있습니다.
*/

/*
풀이
이거 대소문자 변환해주는 함수 있었던거 같은데 기억 안 나니까
걍 아스키코드로 풀고나서 확인해봐야할듯
*/

/*
첫 풀이
#include <string>
using namespace std;

string solution(string my_string) {
    string answer;

    for(char c : my_string) {
        if(c < 91)  answer.push_back(c + 32);
        else answer.push_back(c - 32);
    }
    return answer;
}
*/

/*
islower(char c);
isupper(char c);
-> 대소문자 확인해 참, 거짓을 반환하는 함수

tolower(char c);
toupper(char c);
-> 대문자, 소문자로 변환시켜 반환하는 함수
*/

//적용
#include <string>
using namespace std;

string solution(string my_string) {
    for(char c : my_string) {   //여기서 &c로 수정
        if(islower(c))  c = toupper(c);
        else    c = tolower(c);
    }
    return my_string;
}

/*
이거 오답임
반복문에서 for(char c : my_string) 을 사용하게 되면
char c는 그저 복사체일 뿐임
my_string을 직접 바꾸고 싶다면 for(char &c : my_string) 을 사용해야 함
아니면 인덱스로 접근하든가
*/