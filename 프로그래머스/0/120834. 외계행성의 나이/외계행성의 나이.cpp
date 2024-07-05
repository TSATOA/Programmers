#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    while(age!=0){
        answer.insert(answer.begin(),age%10+97);
        age /= 10;
    }
    return answer;
}