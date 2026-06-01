/*
문제 설명
정수 num과 n이 매개 변수로 주어질 때,
num이 n의 배수이면 1을 return n의 배수가 아니라면 0을 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
2 ≤ num ≤ 100
2 ≤ n ≤ 9
*/

/*
풀이
num % n == 0
으로 조건문
*/

int solution(int num, int n) {
    if(num % n == 0) return 1;
    else return 0;
}

/*
다른 풀이
return num % n == 0;
num % n == 0이 참이면 어차피 1을 출력하고 아니면 0을 출력하니까
*/