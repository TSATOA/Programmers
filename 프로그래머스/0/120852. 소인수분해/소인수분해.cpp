#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int cnt;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cnt = 0;
            for(int j=2;j<=i;j++){
                if(i%j==0)
                    cnt++;
            }
            if(cnt == 1)
                answer.push_back(i);
        }
    }
    return answer;
}