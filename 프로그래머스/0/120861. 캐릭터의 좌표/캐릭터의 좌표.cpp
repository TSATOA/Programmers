#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    answer.push_back(0);
    answer.push_back(0);
    int boardX,boardY;
    boardX = board[0]/2;
    boardY = board[1]/2;

    for(int i=0;i<keyinput.size();i++){
        if(!keyinput[i].compare("left")){
            if(answer[0]-1>=-boardX)
                answer[0]--;
        }else if(!keyinput[i].compare("right")){
            if(answer[0]+1<=boardX)
                answer[0]++;
        }else if(!keyinput[i].compare("up")){
            if(answer[1]+1<=boardY)
                answer[1]++;
        }else{
            if(answer[1]-1>=-boardY){
                answer[1]--;
            }
        }
            
    }
    return answer;
}