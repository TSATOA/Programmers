#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    answer.push_back(arr[0]);
    int cnt = 0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]!=answer[cnt]){
            answer.push_back(arr[i]);
            cnt++;
        }
    }

    return answer;
}