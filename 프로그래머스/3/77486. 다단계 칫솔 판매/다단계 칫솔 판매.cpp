#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount) {
    vector<int> answer;
    unordered_map<string,string> parent;
    unordered_map<string,int> total;
    for(int i=0;i<enroll.size();i++){
        parent[enroll[i]] = referral[i];
        total[enroll[i]] = 0;
    }
    for(int i=0;i<seller.size();i++){
        int money = amount[i]*100;
        string cur_name = seller[i];
        while(money>0&&cur_name!="-"){
            int dis = money/10;
            total[cur_name] += money-dis;
            if(parent.find(cur_name)!=parent.end()){
                cur_name = parent[cur_name];
            }else{
                break;
            }
            money = dis;
        }
    }
    for(int i=0;i<enroll.size();i++){
        answer.push_back(total[enroll[i]]);
    }
    
    
    return answer;
}