#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    int cnt = 0;
    answer.push_back(vector<int>());
    for(int i=0;i<num_list.size();i++){
        if(i!=0&&i%n==0){
            cnt++;
            answer.push_back(vector<int>());
        }
        answer[cnt].push_back(num_list[i]);
    }
        
    return answer;
}