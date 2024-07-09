#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int n = total/num;
    if(num%2==0){
        for(int i=0;i<num;i++){
            answer.push_back(n-(num/2-1)+i);
        }
    }else{
        for(int i=0;i<num;i++){
            answer.push_back(n-(num/2)+i);
        }
        
    }
    return answer;
}