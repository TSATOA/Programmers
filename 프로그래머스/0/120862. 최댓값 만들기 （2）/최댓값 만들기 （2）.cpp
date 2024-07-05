#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(),numbers.end());
    int i = 0;
    int s = numbers[0] * numbers[1];
    answer = numbers[numbers.size()-1]*numbers[numbers.size()-2];
    if(answer<s)
        answer = s;
    return answer;
}