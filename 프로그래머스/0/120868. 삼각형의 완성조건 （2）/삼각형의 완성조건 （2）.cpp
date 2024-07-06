#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    if(sides[0]>sides[1]){
        int k = sides[1];
        sides[1] = sides[0];
        sides[0] = k;
    }
    
    answer += sides[0];
    for(int i= sides[1]+1; i<sides[0]+sides[1]; i++){
        answer++;
    }
        
    
    
    return answer;
}