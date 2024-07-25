#include <string>
#include <vector>
#include <algorithm>

using namespace std;



string solution(string s) {
    string answer = "";
    answer = s;
    sort(answer.begin(),answer.end(),[](char a, char b){return a>b;});
    return answer;
}