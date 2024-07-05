#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    int ans = 0;
    string word;
    for(int i=0;i<quiz.size();i++){
        istringstream str(quiz[i]);
        getline(str,word,' ');
        ans = stoi(word);
        getline(str,word,' ');
        if(!word.compare("+")){
            getline(str,word,' ');
            ans += stoi(word);
        }else{
            getline(str,word,' ');
            ans -= stoi(word);
        }
        getline(str,word,' ');
        getline(str,word,' ');

        if(ans == stoi(word)){
            answer.push_back("O");
        }else{
            answer.push_back("X");
        }
        
    }
    return answer;
}