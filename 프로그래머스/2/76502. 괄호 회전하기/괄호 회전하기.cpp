#include <string>
#include <vector>
#include <stack>
#include <unordered_map>
#include <iostream>

using namespace std;

unordered_map<char,char> spair = {{')','('},{']','['},{'}','{'}};


bool isValid(string &s, int start){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        char c = s[(start+i)%s.size()];
        if(spair.count(c)){
            if(st.empty()||st.top()!=spair[c])
                return false;
            st.pop();
        }else{
            st.push(c);
        }

    }
    return st.empty();
}


int solution(string s) {
    int answer = 0;
    for(int i=0;i<s.size();i++)
        answer+=isValid(s,i);
    return answer;
}