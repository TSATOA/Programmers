#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int d;
    int cnt;
    int i = 0;
    while(answer!=n){
        if(i%3!=0){
            d = i;
            cnt = 0;
            while(d!=0){
                if(d%10==3)
                    cnt = -1;
                d/=10;
            }
            if(cnt!=-1)
                answer++;
        }
        i++;
    }
    answer = i-1;
    return answer;
}