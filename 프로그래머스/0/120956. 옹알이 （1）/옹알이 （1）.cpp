#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> bab = {"aya", "ye", "woo", "ma"};
    int cnt;
    for(int i=0;i<babbling.size();i++){
        cnt = 0;
        for(int j=0;j<babbling[i].size();j++){
            if(babbling[i][j]=='w'&&j+2<babbling[i].size()){
                if(babbling[i][j+1]=='o'&&babbling[i][j+2]=='o')
                    cnt+=3;
            }
            if(babbling[i][j]=='m'&&j+1<babbling[i].size()){
                if(babbling[i][j+1]=='a')
                    cnt+=2;
            }
            if(babbling[i][j]=='e'&&j-1>=0){
                if(babbling[i][j-1]=='y')
                    cnt+=2;
            }
            if(babbling[i][j]=='a'&&j+2<babbling[i].size()){
                if(babbling[i][j-1]!='m'){
                    if(babbling[i][j+1]=='y'&&babbling[i][j+2]=='a')
                        cnt+=3;
                }       
            }
        }
        if(cnt == babbling[i].size()){
            answer++;
        }
        
    }
    return answer;
}