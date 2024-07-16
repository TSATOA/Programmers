#include<vector>
#include<queue>

using namespace std;

struct Point{
    int y,x,cnt;
};

int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int n,m;

bool isWithinRange(int y, int x){
    return y>=0 && y<n && x>=0 && x<m;
}

int bfs(vector<vector<int>> &maps){
    bool visited[101][101] = {false};
    queue<Point> q;
    q.push({0,0,1});
    while(!q.empty()){
        Point current = q.front();
        q.pop();
        if(current.y==n-1&&current.x==m-1)
            return current.cnt;
        for(int i=0;i<4;i++){
            int ny = current.y + dy[i];
            int nx = current.x + dx[i];
            if(isWithinRange(ny,nx)&&!visited[ny][nx]&&maps[ny][nx]==1){
                q.push({ny,nx,current.cnt+1});
                visited[ny][nx]=true;
            }
        }
    }
    return -1;
}

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    n = maps.size();
    m = maps[0].size();
    answer = bfs(maps);
    return answer;
}