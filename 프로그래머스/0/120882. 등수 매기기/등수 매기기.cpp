#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;
/* 시도
bool compare(pair<int,double> &a,pair<int,double>&b){
    return a.second>b.second;
}
vector<pair<int, double>> vec(avg.begin(), avg.end());
sort(vec.begin(),vec.end(),compare);
*/

bool compare(double a, double b){
    return a>b;
}

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<double> avg;
    vector<double> avgrank;
    for(int i=0;i<score.size();i++){
        avg.push_back((score[i][0]+score[i][1])/2.0);
    }
    avgrank = avg;
    sort(avgrank.begin(),avgrank.end(),compare);
    
    for(int i=0;i<score.size();i++){
        for(int j=0;j<score.size();j++){
            if(avg[i]==avgrank[j]){
                answer.push_back(j+1);
                break;
            }
        }
    }
    return answer;
}