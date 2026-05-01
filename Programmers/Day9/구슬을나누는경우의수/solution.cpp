/*
문제 설명
머쓱이는 구슬을 친구들에게 나누어주려고 합니다. 구슬은 모두 다르게 생겼습니다. 머쓱이가 갖고 있는 구슬의 개수 balls와 친구들에게 나누어 줄 구슬 개수 share이 매개변수로 주어질 때, balls개의 구슬 중 share개의 구슬을 고르는 가능한 모든 경우의 수를 return 하는 solution 함수를 완성해주세요.
*/

/*
제한사항
1 ≤ balls ≤ 30
1 ≤ share ≤ 30
구슬을 고르는 순서는 고려하지 않습니다.
share ≤ balls
*/

/*
5개 중에 3개를 고르면
5C3 / 3C1
*/

int solution(int balls, int share) {
    long long int answer = 1;

    for(int i = 0; i < share; i++) {
        answer *= balls - i;

        answer /= (i + 1);
    }

    return answer;
}

//오버플로우 생각 못했음

/*
다른 풀이
int combi(int n, int r){
    if(r == 0) return 1;
    if(n == 1) return 1;
    if(r >= n) return 1;
    return combi(n-1, r) + combi(n-1, r-1);
}

int solution(int balls, int share) {
    int answer = 0;
    answer = combi(balls, share);
    return answer;
}
*/