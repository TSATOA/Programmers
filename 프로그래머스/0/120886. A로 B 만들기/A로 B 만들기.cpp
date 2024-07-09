#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string before, string after) {
    int answer = 1;
    vector<int> cnt1(before.size(),0);
    vector<int> cnt2(after.size(),0);
    for(int i=0;i<after.size();i++){
        for(int j=0;j<before.size();j++){
            if(after[i]==before[j]&&cnt1[j]==0&&cnt2[i]==0){
                cnt1[j]++;
                cnt2[i]++;
            }
        }
    }
    for(int i=0;i<cnt1.size();i++){
        if(cnt1[i]!=1||cnt2[i]!=1)
            answer = 0;
    }
    return answer;
}