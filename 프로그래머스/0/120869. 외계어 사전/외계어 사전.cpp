#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    int cnt,cnts;
    for(int i=0;i<dic.size();i++){
        cnt = 0;
        for(int j=0;j<spell.size();j++){
            cnts = 0;
            for(int k=0;k<dic[i].size();k++){
                if(dic[i][k]==spell[j][0])
                    cnts++;
            }
            if(cnts==1)
                cnt++;
        }
        if(cnt==spell.size()){
            answer = 1;
            break;
        }   
    }
    return answer;
}