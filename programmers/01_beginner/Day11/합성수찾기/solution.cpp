/*
문제 설명
약수의 개수가 세 개 이상인 수를 합성수라고 합니다. 자연수 n이 매개변수로 주어질 때 n이하의 합성수의 개수를 return하도록 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ n ≤ 100
*/

/*
풀이
n이하 중에서 찾기 때문에 1부터 n까지 반복문 돌려야 함
그 반복문에서 다시 1부터 i까지 이중 반복문으로 그 수가 합성수인지 판별하고 answer++
*/

int solution(int n) {
    int answer = 0;
    for(int i = 1; i <= n; i++) {
        int count = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) count++;
        }
        if(count > 2) answer++;
    }

    return answer;
}