#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int arr[1000] = {0};
    // 숫자 개수 세기
    for(int i=0;i<array.size();i++){
        arr[array[i]]++;
    }
    // 최빈값 구하기
    int max = arr[0];
    for(int i=1;i<1000;i++){
        if(arr[i]>max){
            max = arr[i];
            answer = i;
        }
    }
    // 최빈값 여러개인지 확인
    int cnt=0;
    for(int i=0;i<1000;i++){
        if(arr[i]==max)
            cnt++;
    }
    
    if(cnt!=1)
        answer = -1;
    return answer;
}