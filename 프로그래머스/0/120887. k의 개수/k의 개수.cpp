#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(int x=i; x<=j; x++){
        string num = to_string(x);
        if(num.find((to_string(k)))!=string::npos){
            for(int y=0;y<num.size();y++){
                if(num[y]==k+'0')
                    answer++;
            }
        }
    }
    return answer;
}