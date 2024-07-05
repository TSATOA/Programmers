#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    istringstream str(my_string);
    string word;
    getline(str,word,' ');
    answer += stoi(word);
    while(getline(str,word,' ')){
        if(!word.compare("+")){
            getline(str,word,' ');
            answer += stoi(word);
        }else{
            getline(str,word,' ');
            answer -= stoi(word);
        }
    }
    return answer;
}