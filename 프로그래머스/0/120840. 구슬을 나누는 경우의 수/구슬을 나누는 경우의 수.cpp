#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int balls, int share) {
    int answer = 1;
    long long int ans = 1;
    for(int i=0;i<share;i++){
        ans *= (balls-i);
        ans /= (i+1);
    }
    answer = ans;
    return answer;
}