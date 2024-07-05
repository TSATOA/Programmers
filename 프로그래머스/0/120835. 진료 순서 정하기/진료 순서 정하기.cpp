#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
    return a>b;
}

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> em = emergency;
    sort(em.begin(),em.end(),compare);
    for(int i=0;i<emergency.size();i++){
        for(int j=0;j<em.size();j++){
            if(emergency[i]==em[j])
                answer.push_back(j+1);
        }
    }
    return answer;
}