#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    answer = n/__gcd(6,n);
    
    return answer;
}