#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(pair<int,float>& a, pair<int,float>& b){
    if(a.second==b.second)
        return a.first<b.first;
    return a.second>b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<float> total(N+2,0.0);
    vector<float> fail(N+2,0.0); 
    
    for(int i=0;i<stages.size();i++){
        for(int j=1;j<=stages[i];j++){
            total[j]++;
        }
        fail[stages[i]]++;
    }
    vector<pair<int,float>> ratio(N);
    for(int i=0;i<N;i++){
        ratio[i].first = i+1;
        if(total[i+1]==0)
            ratio[i].second=0;
        else
            ratio[i].second = fail[i+1]/total[i+1];
    }
    sort(ratio.begin(),ratio.end(),compare);
    for(int i=0;i<N;i++){
        answer.push_back(ratio[i].first);
    }
    return answer;
    
}