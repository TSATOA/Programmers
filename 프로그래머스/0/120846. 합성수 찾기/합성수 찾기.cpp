#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int cnt;
    for(int i=1;i<=n;i++){
        cnt = 0;
        for(int j=1;j<i;j++){
            if(i%j==0)
                cnt++;
        }
        if(cnt>1)
            answer++;
    }
    return answer;
}