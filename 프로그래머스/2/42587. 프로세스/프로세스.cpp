#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int,int>> que;
    queue<int> priority;
    for(int i=0;i<priorities.size();i++)
        que.push({i,priorities[i]});
    sort(priorities.begin(),priorities.end(),[](int a, int b){return a>b;});
    for(int i=0;i<priorities.size();i++)
        priority.push(priorities[i]);
    
    int d = -1;
    while(d!=location){
        if(que.front().second==priority.front()){
            priority.pop();
            d = que.front().first;
            que.pop();
            answer++;
        }else{
            int x = que.front().first;
            int y = que.front().second;
            que.pop();
            que.push({x,y});
        }
    }
    return answer;
}