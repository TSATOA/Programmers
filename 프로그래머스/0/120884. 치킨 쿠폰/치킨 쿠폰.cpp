#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int cnt = 0;
    while(chicken>=10){
        answer+=chicken/10;
        chicken = chicken/10+chicken%10;
    }

    return answer;
}