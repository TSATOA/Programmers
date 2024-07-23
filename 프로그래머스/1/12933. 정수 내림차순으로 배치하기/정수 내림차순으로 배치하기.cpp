#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string a = to_string(n);
    sort(a.begin(),a.end(),[](char a, char b){return a>b;});
    return stol(a);
}