#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int k = 101;
    sort(array.begin(),array.end());
    for(int i=0;i<array.size();i++){
        if(k>abs(n-array[i])){
            k = abs(n-array[i]);
            answer = array[i];
        }
    }
    return answer;
}