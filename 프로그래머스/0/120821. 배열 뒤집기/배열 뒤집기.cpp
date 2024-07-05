#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for(vector<int>::iterator i=num_list.end()-1;i>=num_list.begin();i--)
        answer.push_back(*i);
    return answer;
}