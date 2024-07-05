#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string snum;
    snum = to_string(num);
    for(int i=0;i<snum.size();i++){
        if(snum[i]=='0'+k){
            answer = i+1;
            break;
        }
    }
    return answer;
}