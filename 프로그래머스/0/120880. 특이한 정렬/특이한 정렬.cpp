#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    sort(numlist.begin(),numlist.end());
    int first = 0;
    for(int i=0; i<numlist.size();i++){
        if(abs(numlist[first]-n)>abs(numlist[i]-n))
            first = i;
    }

    answer.push_back(numlist[first]);
    int x=first;
    int y=first;
    for(int cnt = 0; cnt<numlist.size()-1;cnt++){
        if(x==0){
            y++;
            answer.push_back(numlist[y]);
        }else if(y==0){
            x--;
            answer.push_back(numlist[x]);
        }else{
            if(abs(numlist[x-1]-n)<abs(numlist[y+1]-n)){
                x--;
                answer.push_back(numlist[x]);
            }else{
                y++;
                answer.push_back(numlist[y]);
            }
        }
    }
    
    return answer;
}