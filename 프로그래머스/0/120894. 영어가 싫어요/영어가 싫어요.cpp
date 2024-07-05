#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string ans = "";
    vector<string> num = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    while(numbers!=""){
        for(int i=0;i<num.size();i++){
            if((numbers.substr(0,num[i].size())).compare(num[i])==0){
                ans+=to_string(i);
                numbers.erase(0,num[i].size());
            }
        }
    }
    answer = stol(ans);
    return answer;
}