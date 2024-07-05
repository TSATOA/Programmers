#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int x,y;
    for(int i=1;i<4;i++){
        if(dots[0][0]-dots[i][0]!=0)
            x = abs(dots[0][0]-dots[i][0]);
        if(dots[0][1]-dots[i][1]!=0)
            y = abs(dots[0][1]-dots[i][1]);
    }
    answer = x*y;
    return answer;
}