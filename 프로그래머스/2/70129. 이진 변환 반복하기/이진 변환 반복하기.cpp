#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int cnt = 0;
    int zero = 0;
    while(s!="1"){
        int z = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                z++;
            }
        }
        zero+=z;
        int len = s.size()-z;
        s = "";
        while(len!=0){
            if(len%2==1)
                s.push_back('1');
            else
                s.push_back('0');
            len = len/2;
        }
        cnt++;
    }
    answer.push_back(cnt);
    answer.push_back(zero);
    return answer;
}
