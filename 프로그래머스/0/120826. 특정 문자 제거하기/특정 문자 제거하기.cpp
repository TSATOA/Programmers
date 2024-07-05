#include <string>
#include <vector>


using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    answer = my_string;
    while(answer.find(letter)!=string::npos){
        answer.erase(answer.find(letter),letter.size());
    }
    return answer;
}