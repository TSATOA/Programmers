#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b) {
    int answer = 1;
    for(int i=a;i>0;i--){
        if(a%i==0&&b%i==0) {
            b = b/i;
            break;
        }
    }

    for(int i=2;i<=b;i++){
        if(b%i==0){
            if(i%2==0||i%5==0){
                answer = 1;
            }else{
                answer = 2;
                break;
            }
        }
    }
    return answer;
}