#include <string>
#include <vector>
#include <iostream>

using namespace std;


int solution(vector<vector<int>> triangle) {
    int answer;
    for(int i=1;i<triangle.size();i++){
        for(int j = 0; j<i+1;j++){
            if(j==0){
                triangle[i][j] += triangle[i-1][j];
            }
            else if(j==i){
                triangle[i][j] += triangle[i-1][j-1];
            }else{
                if(triangle[i-1][j]>triangle[i-1][j-1])
                    triangle[i][j] += triangle[i-1][j];
                else
                    triangle[i][j] +=triangle[i-1][j-1];
            }
        }
    }
    answer = triangle[triangle.size()-1][0];
    for(int i=1;i<triangle.size();i++){
        if(triangle[triangle.size()-1][i]>answer)
            answer = triangle[triangle.size()-1][i];
    }
    return answer;
}