#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int buf;
    istringstream str(s);
    string word;
    while(getline(str,word,' ')){
        if(!word.compare("Z")){
            answer -= buf;
        }else{
            answer+=stoi(word);
            buf = stoi(word);
        }
    }
    return answer;
}