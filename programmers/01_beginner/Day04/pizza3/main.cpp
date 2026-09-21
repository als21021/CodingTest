/*
문제 설명
머쓱이네 피자가게는 피자를 두 조각에서 열 조각까지 원하는 조각 수로 잘라줍니다. 피자 조각 수 slice와 피자를 먹는 사람의 수 n이 매개변수로 주어질 때, n명의 사람이 최소 한 조각 이상 피자를 먹으려면 최소 몇 판의 피자를 시켜야 하는지를 return 하도록 solution 함수를 완성해보세요.
*/

/*
풀이
피자 수와 인원 수는 정해져있음
pizza * slice가 n보다 크거나 같아질 때까지 피자 수를 더하면 될 듯
*/

#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int pizza = 1;
    while((pizza * slice) < n) {
        pizza++;
    }
    return pizza;
}

/*
다른 풀이
return (n+slice-1)/slice;

사람 수가 조각 수를 넘어가는 순간 피자는 한 판이 더 필요하게 됨
왜 이 생각을 못했지
*/