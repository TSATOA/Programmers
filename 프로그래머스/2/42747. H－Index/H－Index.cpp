#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(int,int);

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end(), greater<int>());

    int answer = 0;
    while (answer < citations.size() && citations[answer] > answer) {
        answer++;
    }

    return answer;
}

