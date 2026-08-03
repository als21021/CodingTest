/*
달리기 경주

문제 설명

얀에서는 매년 달리기 경주가 열립니다.
해설진들은 선수들이 자기 바로 앞의 선수를 추월할 때 추월한 선수의 이름을 부릅니다.
예를 들어 1등부터 3등까지 "mumu", "soe", "poe" 선수들이 순서대로 달리고 있을 때, 해설진이 "soe"선수를 불렀다면 2등인 "soe" 선수가 1등인 "mumu" 선수를 추월했다는 것입니다. 즉 "soe" 선수가 1등, "mumu" 선수가 2등으로 바뀝니다.
선수들의 이름이 1등부터 현재 등수 순서대로 담긴 문자열 배열 players와 해설진이 부른 이름을 담은 문자열 배열 callings가 매개변수로 주어질 때, 경주가 끝났을 때 선수들의 이름을 1등부터 등수 순서대로 배열에 담아 return 하는 solution 함수를 완성해주세요.

제한사항
5 ≤ players의 길이 ≤ 50,000
players[i]는 i번째 선수의 이름을 의미합니다.
players의 원소들은 알파벳 소문자로만 이루어져 있습니다.
players에는 중복된 값이 들어가 있지 않습니다.
3 ≤ players[i]의 길이 ≤ 10
2 ≤ callings의 길이 ≤ 1,000,000
callings는 players의 원소들로만 이루어져 있습니다.
경주 진행중 1등인 선수의 이름은 불리지 않습니다.
*/

/*
풀이
swap 함수가 잘 기억이 안 나네
callings를 반복할 거임  for(string calling : callings)
player를 0부터 player.size() 까지 반복하면서 calling과 같은게 있다면
swap(players[i], players[i-1]) 이렇게 하면 바뀌던가? 그리고 break 해서 다음 calling으로
이게 끝 아님? 문제 개쉬운데
*/

/*
오답

#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {

    for(string calling : callings) {

        for(int i = 0; i < players.size(); i++) {

            if(calling == players[i]) {

                swap(players[i], players[i-1]);
                break;
            }
        }
    }

    return players;
}

시간 초과가 떴음
players의 길이가 50000까지 가능해서 그걸 다 훑다보니까 시간 제한 뜨는듯

unordered_map으로 players의 역함수를 만들어서 한 번에 찾을거임
*/

#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings)
{

    unordered_map<string, int> playerMap;
    for (int i = 0; i < players.size(); i++)
    {

        playerMap[players[i]] = i;
    }

    for (string calling : callings)
    {

        int i = playerMap[calling];

        playerMap[players[i]] = i - 1;
        playerMap[players[i - 1]] = i;

        swap(players[i], players[i - 1]);
    }

    return players;
}