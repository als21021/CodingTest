/*
문제 설명

이차원 정수 배열 arr이 매개변수로 주어집니다. arr의 행의 수가 더 많다면 열의 수가 행의 수와 같아지도록 각 행의 끝에 0을 추가하고, 열의 수가 더 많다면 행의 수가 열의 수와 같아지도록 각 열의 끝에 0을 추가한 이차원 배열을 return 하는 solution 함수를 작성해 주세요.

제한사항
1 ≤ arr의 길이 ≤ 100
1 ≤ arr의 원소의 길이 ≤ 100
arr의 모든 원소의 길이는 같습니다.
1 ≤ arr의 원소의 원소 ≤ 1,000
*/

/*
풀이
열과 행 중 더 긴 것을 파악

열이 더 길면 각 행마다 0 추가해주면 됨

행이 더 길면 행 몇 개 더 추가해주고
*/

#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {

    int column = arr.size();
    int row = arr[0].size();

    //열 길이 > 행 길이
    if(column > row) {

        //부족한 만큼 요소마다 0 추가
        for(vector<int>& a : arr) {

            for(int i = 0; i < column - row; i++) {
                a.push_back(0);
            }
        }
    }
    
    //열 길이 < 행 길이
    else if(column < row) {

        vector<int> newArr;
        for(int i = 0; i < row; i++) {
            newArr.push_back(0);
        }

        //0으로 이루어진 행 추가
        for(int i = 0; i < row - column; i++) {
            arr.push_back(newArr);
        }
    }

    return arr;
}