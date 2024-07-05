#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    answer = my_string;
    for(int i=0;i<answer.size();i++){
        if(answer[i]>='A'&&answer[i]<='Z'){
            answer[i]+=32;
        }
    }
    sort(answer.begin(),answer.end());
    return answer;
}