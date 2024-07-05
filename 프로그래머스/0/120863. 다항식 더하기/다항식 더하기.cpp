#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    int frontX = 0;
    int num = 0;
    
    istringstream str(polynomial);
    string word;
    while(getline(str,word,' ')){
        if(word.find("x")!=string::npos){
            if(word.size()==1){
                frontX+=1;
            }else{
                string k = word.substr(0,word.size()-1);
                frontX += stoi(k);
            }
        }else{
            if(word.compare("+"))
                num += stoi(word);
        }
    }
    if(frontX!=0&&num!=0){
        if(frontX==1){
            answer = "x + "+to_string(num);
        }else{
            answer = to_string(frontX)+"x + "+to_string(num);
        }
    }
    else if(frontX==0&&num!=0){
        answer = to_string(num);
    }
    else if(frontX!=0&&num==0){
        if(frontX==1){
            answer = "x";
        }else{
            answer = to_string(frontX)+"x";
        }
    }
    else{
        answer = "";
    }
    return answer;
}