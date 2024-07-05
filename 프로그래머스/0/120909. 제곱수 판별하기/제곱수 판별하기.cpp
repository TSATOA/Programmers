#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 2;
    int check = 1;
    while(check<n){
        if(check*check==n){
            answer = 1;
            break;
        }
        check++;
    }
    
    return answer;
}