#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> cnt(27,0);
    for(int i=0;i<s.size();i++){
        cnt[s[i]-'a']++;
    }
    
    for(int i=0;i<cnt.size();i++){
        if(cnt[i]==1)
            answer+= 'a'+i;
    }
    return answer;
}