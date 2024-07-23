#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long long a = sqrt(n);

    if(a*a==n){
         answer = (a+1)*(a+1);
    }
    return answer;
}