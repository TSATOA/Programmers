#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int cnt = 1;
    int num = 0;
    for(int i=0;i<my_string.size();i++){
        if(my_string[i]>='1'&&my_string[i]<='9'){
            cnt = 1;
            num = my_string[i]-'0';
            while(my_string[i+cnt]>='0'&&my_string[i+cnt]<='9'){
                num *= 10;
                num += my_string[i+cnt]-'0';
                cnt++;
            }
            i+=cnt-1;
            answer += num;
        }
    }
    return answer;
}