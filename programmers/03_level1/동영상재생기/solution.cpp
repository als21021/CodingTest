/*
문제 설명

당신은 동영상 재생기를 만들고 있습니다.
당신의 동영상 재생기는 10초 전으로 이동, 10초 후로 이동, 오프닝 건너뛰기 3가지 기능을 지원합니다.
각 기능이 수행하는 작업은 다음과 같습니다.
10초 전으로 이동: 사용자가 "prev" 명령을 입력할 경우 동영상의 재생 위치를 현재 위치에서 10초 전으로 이동합니다.
현재 위치가 10초 미만인 경우 영상의 처음 위치로 이동합니다. 영상의 처음 위치는 0분 0초입니다.
10초 후로 이동: 사용자가 "next" 명령을 입력할 경우 동영상의 재생 위치를 현재 위치에서 10초 후로 이동합니다.
동영상의 남은 시간이 10초 미만일 경우 영상의 마지막 위치로 이동합니다. 영상의 마지막 위치는 동영상의 길이와 같습니다.
오프닝 건너뛰기: 현재 재생 위치가 오프닝 구간(op_start ≤ 현재 재생 위치 ≤ op_end)인 경우 자동으로 오프닝이 끝나는 위치로 이동합니다.
동영상의 길이를 나타내는 문자열 video_len,
기능이 수행되기 직전의 재생위치를 나타내는 문자열 pos,
오프닝 시작 시각을 나타내는 문자열 op_start,
오프닝이 끝나는 시각을 나타내는 문자열 op_end,
사용자의 입력을 나타내는 1차원 문자열 배열 commands가 매개변수로 주어집니다.
이때 사용자의 입력이 모두 끝난 후 동영상의 위치를 "mm:ss" 형식으로 return 하도록 solution 함수를 완성해 주세요.

제한사항
video_len의 길이 = pos의 길이 = op_start의 길이 = op_end의 길이 = 5
video_len, pos, op_start, op_end는 "mm:ss" 형식으로 mm분 ss초를 나타냅니다.
0 ≤ mm ≤ 59
0 ≤ ss ≤ 59
분, 초가 한 자리일 경우 0을 붙여 두 자리로 나타냅니다.
비디오의 현재 위치 혹은 오프닝이 끝나는 시각이 동영상의 범위 밖인 경우는 주어지지 않습니다.
오프닝이 시작하는 시각은 항상 오프닝이 끝나는 시각보다 전입니다.
1 ≤ commands의 길이 ≤ 100
commands의 원소는 "prev" 혹은 "next"입니다.
"prev"는 10초 전으로 이동하는 명령입니다.
"next"는 10초 후로 이동하는 명령입니다.
*/

/*
풀이
:로 구분되어 있는 시간 문자열을 정수로 바꿔야 함
2번째 인자 제거 후 stoi 하면 되지 않을까
stoi(pos.erase(2)) 이게 되나?

그 후 명령어들로 이루어진 commands를 범위기반 for문 돌려서 하나씩 수행

반복문의 처음에는 오프닝 구간 안에 있는지 확인해야 함

명령어가 뭔 지 확인하고 그에 맞게 시간 +-10 근데 50초 이상이거나 10초 미만이면 자리 넘겨줘야 함
answer % 100 >= 50 이면 answer += 50
answer % 100 < 10 이면 answer -= 50

넘길 때 끝 구간 시작 구간인지도 확인해야 함

반복문이 끝나고 나서도 오프닝 구간인지 확인해준 후

string answer += to_string(pos_toInt)
가운데에 : 삽입 후 리턴
*/

#include <string>
#include <vector>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    
    string answer = "";

    //계산하기 편하게 정수로 변환
    int pos_toInt = stoi(pos.erase(2, 1));
    int video_len_toInt = stoi(video_len.erase(2, 1));
    int op_start_toInt = stoi(op_start.erase(2, 1));
    int op_end_toInt = stoi(op_end.erase(2, 1));

    //commands 반복
    for(string command : commands) {

        //오프닝 구간 안에 있으면 오프닝 끝으로 이동
        if((op_start_toInt <= pos_toInt) && (op_end_toInt > pos_toInt)) {
            pos_toInt = op_end_toInt;
        }

        //command가 prev일 때
        if(command == "prev") {
            
            //10초 미만이면 자리수 낮추기
            if(pos_toInt % 100 < 10) pos_toInt -= 50;
            else pos_toInt -= 10;
        }

        //command가 next일 때
        if(command == "next") {

            //50초 이상이면 자리수 높이기
            if(pos_toInt % 100 >= 50) pos_toInt += 50;
            else pos_toInt += 10;
        }

        //시간이 영상 범위를 벗어나면 수정
        if(pos_toInt < 0) pos_toInt = 0;
        else if(pos_toInt > video_len_toInt) pos_toInt = video_len_toInt;
    }

    //끝나고 나서 오프닝 구간이면 넘기기
    if((op_start_toInt <= pos_toInt) && (op_end_toInt > pos_toInt)) {
            pos_toInt = op_end_toInt;
    }

    //문자열로 변환
    if(pos_toInt / 100 < 10) {
        answer += '0';
        answer += to_string(pos_toInt / 100);
    } else answer += to_string(pos_toInt / 100);
    answer += ':';
    if(pos_toInt % 100 < 10) {
        answer += '0';
        answer += to_string(pos_toInt % 100);
    } else answer += to_string(pos_toInt % 100);

    return answer;
}