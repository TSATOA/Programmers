#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string A, string B) {
    int answer = -1;
    for(int i=0;i<A.size();i++){
        if(A.compare(B)==0){
            answer = i;
            break;
        }
        B+=B[0];
        B.erase(0,1);
    }

    return answer;
}