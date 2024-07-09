#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int llen;
    int slen;
    int w = 2;
    if(bin1.size()>bin2.size()){
        llen = bin1.size();
        slen = bin2.size();
        w = 1;
    }else{
        llen = bin2.size();
        slen = bin1.size();
    }
    int cnt = 0;
    for(int i=1;i<=slen;i++){
        if(((bin1[bin1.size()-i]-'0')+(bin2[bin2.size()-i]-'0'))+cnt==3){
            answer.insert(0,"1");
            cnt = 1;
        }else if(((bin1[bin1.size()-i]-'0')+(bin2[bin2.size()-i]-'0'))+cnt==2){
            answer.insert(0,"0");
            cnt = 1;
        }else if(((bin1[bin1.size()-i]-'0')+(bin2[bin2.size()-i]-'0'))+cnt==1){
            answer.insert(0,"1");
            cnt = 0;
        }else{
            answer.insert(0,"0");
            cnt = 0;
        }
    }

    for(int i=llen-slen-1;i>=0;i--){
        if(w==1){
            if((bin1[i]-'0')+cnt==2){
                answer.insert(0,"0");
                cnt = 1;
            }else if((bin1[i]-'0')+cnt==1){
                answer.insert(0,"1");
                cnt = 0;
            }else{
                answer.insert(0,"0");
                cnt = 0;
            }
        }else{
            if((bin2[i]-'0')+cnt==2){
                answer.insert(0,"0");
                cnt = 1;
            }else if((bin2[i]-'0')+cnt==1){
                answer.insert(0,"1");
                cnt = 0;
            }else{
                answer.insert(0,"0");
                cnt = 0;
            }
        }
    }
    if(cnt==1)
        answer.insert(0,"1");

    return answer;
}