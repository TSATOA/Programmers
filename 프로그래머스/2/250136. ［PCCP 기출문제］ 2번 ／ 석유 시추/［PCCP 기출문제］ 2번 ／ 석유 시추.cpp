#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <set>

using namespace std;

bool visited[501][501];

vector<int> dy = {-1,0,1,0};
vector<int> dx = {0,1,0,-1};
int n,m,cnt=0;

set<int> line;
vector<vector<int>> lines;
bool canFind(int y, int x){
    return y>=0&&y<n &&x>=0&&x<m;
}

bool dfs(vector<vector<int>>& land,int y, int x){
    if(!canFind(y,x))
        return false;
    if(visited[y][x]==false&&land[y][x]==1){
        visited[y][x]=true;
        cnt++;
        line.insert(x);
        for(int i=0;i<4;i++){
            dfs(land,y+dy[i],x+dx[i]);
        }
        return true;
    }
    return false;
    
}

int solution(vector<vector<int>> land) {
    int answer = 0;
    n = land.size();
    m = land[0].size();
    int x = 0;
    lines.resize(m);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            x = cnt;
            dfs(land,j,i);
            if(cnt!=x&&cnt!=0){
                for(auto s : line){
                    lines[s].push_back(cnt-x);
                }
            }
            line.clear();
        }
        cnt = 0;
    }
    int h;
    for(int i=0;i<lines.size();i++){
        h=0;
        for(int j=0;j<lines[i].size();j++){
            h+=lines[i][j];
        }
        if(h>answer)
            answer = h;
    }

    return answer;
}