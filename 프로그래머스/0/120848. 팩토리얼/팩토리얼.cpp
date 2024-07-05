#include <string>
#include <vector>

using namespace std;

int factorial(int n){
    if(n<=1)
        return 1;
    return n*factorial(n-1);
}

int solution(int n) {
    int answer = 0;
    while(n>=factorial(answer))
        answer++;
    answer--;
    return answer;
}