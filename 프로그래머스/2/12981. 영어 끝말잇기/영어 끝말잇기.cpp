#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    unordered_map<string,int> wo;
    for(int i=0;i<words.size();i++){
        wo[words[i]]++;
        if(wo[words[i]]==2||(i!=0&&words[i-1].back()!=words[i].front())){
            answer.push_back(i%n+1);
            answer.push_back(i/n+1);
            return answer;
        }
    }
    answer.push_back(0);
    answer.push_back(0);
    return answer;
}