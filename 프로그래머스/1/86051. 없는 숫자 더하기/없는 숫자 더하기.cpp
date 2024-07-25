#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    int num = 0;
    set<int> a;
    for(int i=0;i<numbers.size();i++){
        a.insert(numbers[i]);
    }
    for(auto i : a){
        num+=i;
    }
    if(num!=45)
        answer = 45-num;
    return answer;
}