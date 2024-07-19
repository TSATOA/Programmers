#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    unordered_map<string,string> db;
    for(int i=0;i<record.size();i++){
        istringstream str(record[i]);
        string word;
        int cnt = 0;
        string id="";
        while(getline(str,word,' ')){
            if(cnt==0){
                if(word=="Enter"){
                    cnt = 1;
                }else if(word=="Leave"){
                    cnt = 2;
                }else{
                    cnt = 3;
                }
                continue;
            }
            if(id.size()==0&&cnt!=0){
                id = word;
                /*
                if(cnt==2){
                    db[id].second--;
                }
                */
                continue;
            }
            if(cnt==1||cnt==3){
                db[id] = word;
            }
        }
    }
    

    
    for(int i=0;i<record.size();i++){
        istringstream str(record[i]);
        string word;
        int cnt = 0;
        string id="";
        while(getline(str,word,' ')){
            if(cnt==0){
                if(word=="Enter"){
                    cnt = 1;
                }else if(word=="Leave"){
                    cnt = 2;
                }else{
                    cnt = 3;
                }
                continue;
            }
            if(cnt==1){
                answer.push_back(db[word]+"님이 들어왔습니다.");
                break;
            }else if(cnt==2){
                answer.push_back(db[word]+"님이 나갔습니다.");
                break;
            }
        }
    }
    
    return answer;
}