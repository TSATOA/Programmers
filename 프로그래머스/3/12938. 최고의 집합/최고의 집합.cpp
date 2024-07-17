#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int s) {
    
    if(s/n==0){
        vector<int> x;
        x.push_back(-1);
        return x;
    }
    vector<int> a(n);
    int sum = 0;
    for(int i=0;i<n;i++){
        a[i] = s/n;
        sum+=a[i];
    }
    int i=0;
    while(sum!=s){
        a[i]++;
        i++;
        sum++;
        if(i>=n){
            i=0;
        }
    }
    sort(a.begin(),a.end());
    return a;
}