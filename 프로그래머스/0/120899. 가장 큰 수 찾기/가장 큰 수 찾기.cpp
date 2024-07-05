#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    vector<int> arr(array);
    sort(arr.begin(),arr.end());
    answer.push_back(arr[arr.size()-1]);
    for(int i=0; i<array.size();i++){
        if(array[i]==arr[arr.size()-1]){
            answer.push_back(i);
            break;
        }
    }
    return answer;
}