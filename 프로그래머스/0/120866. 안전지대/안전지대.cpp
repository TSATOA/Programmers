#include <string>
#include <vector>

using namespace std;

void check(vector<vector<int>> &board, int x, int y){
    for(int i=-1; i<2; i++){
        for(int j=-1; j<2; j++){
            if(y+i>=0&&y+i<board.size()&&x+j>=0&&x+j<=board.size()){
                if(board[y+i][x+j]==0){
                    board[y+i][x+j] = 2;
                }
            }
        }
    }
}

int solution(vector<vector<int>> board) {
    int answer = 0;
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board.size();j++){
            if(board[i][j]==1){
                check(board,j,i);
            }
        }
    }
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board.size();j++){
            if(board[i][j]==0)
                answer++;
        }
    }
    return answer;
}