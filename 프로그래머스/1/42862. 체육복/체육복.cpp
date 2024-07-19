#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> have(n,1);
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    for(int i=0;i<reserve.size();i++){
        have[reserve[i]-1]++;
    }

    for(int i=0;i<lost.size();i++){
        have[lost[i]-1]--;
    }
    
    if(have[0]==2){
        if(have[1]==0){
            have[0]--;
            have[1]++;
        }
    }
    if(have[n-1]==2){
        if(have[n-2]==0){
            have[n-1]--;
            have[n-2]++;
        }
    }
    for(int i=1;i<n-1;i++){
        if(have[i]==2){
            if(have[i-1]==0){
                have[i]--;
                have[i-1]++;
                continue;
            }
            if(have[i+1]==0){
                have[i]--;
                have[i+1]++;
            }
        }
    }
    
    
    for(int i=0;i<n;i++){
        cout << have[i] << endl;
        if(have[i]>=1)
            answer++;
    }
    return answer;
}