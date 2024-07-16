#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    set<string> cloth;
    unordered_map<string,int> asd;
    for(int i=0;i<clothes.size();i++){
        if(cloth.find(clothes[i][1])!=cloth.end()){
            cloth.insert(clothes[i][1]);
        }
        asd[clothes[i][1]]++;
    }
    for(auto i : asd){
        answer *= (i.second+1);
    }
    
    return answer-1;
}

