#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string,int> human;
    for(int i=0;i<participant.size();i++){
        human[participant[i]] ++;
    }
    for(int i=0;i<completion.size();i++){
        human[completion[i]]--;
    }
    for(auto i : human){
        if(i.second==1)
            answer += i.first;
    }
    return answer;
}