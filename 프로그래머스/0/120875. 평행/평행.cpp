#include <string>
#include <vector>

using namespace std;

double Slope(vector<int> a, vector<int> b){
    return (double)(a[1]-b[1])/(a[0]-b[0]);
}

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector<double> slope;
    
    if(Slope(dots[0],dots[1])==Slope(dots[2],dots[3])) answer = 1;
    if(Slope(dots[0],dots[2])==Slope(dots[1],dots[3])) answer = 1;
    if(Slope(dots[0],dots[3])==Slope(dots[1],dots[2])) answer = 1;
       
    return answer;
}