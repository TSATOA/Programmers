#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    unordered_map<string,int> wa;
    for(int i=0;i<want.size();i++)
        wa[want[i]] = number[i];
    for(int i=0;i<discount.size()-9;i++){
        unordered_map<string,int> dis;
        for(int j=i;j<10+i;j++){
            dis[discount[j]]++;
        }

        if(wa==dis)
            answer++;
    }
    return answer;
}