#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    answer = ceil((float)n/slice);
    return answer;
}