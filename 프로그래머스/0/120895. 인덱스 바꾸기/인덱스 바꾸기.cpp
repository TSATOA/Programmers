#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = "";
    answer = my_string;
    swap(answer[num1],answer[num2]);
    return answer;
}