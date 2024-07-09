#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    int cnt;
    for(int i=0;i<db.size();i++){
        cnt = 0;
        if(id_pw[0].compare(db[i][0])==0){
            cnt = 1;
            if(id_pw[1].compare(db[i][1])==0){
                cnt = 2;
            }
            break;
        }
    }
    if(cnt ==0)
        answer += "fail";
    else if(cnt == 1)
        answer += "wrong pw";
    else
        answer += "login";
    return answer;
}