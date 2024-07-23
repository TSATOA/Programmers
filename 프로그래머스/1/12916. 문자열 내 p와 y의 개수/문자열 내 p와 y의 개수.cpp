#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int a=0;
    int b=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='p'||s[i]=='P'){
            a++;
        }
        if(s[i]=='y'||s[i]=='Y'){
            b++;
        }
    }
    

    return a==b;
}