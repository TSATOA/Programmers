#include<iostream>
#include<string>
#include<stack>

using namespace std;

int solution(string s)
{
    int answer = 0;
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(st.empty()||st.top()!=s[i]){
            st.push(s[i]);
        }else{
            st.pop();
        }
    }
    if(st.size()==0)
        answer=1;

    return answer;
}