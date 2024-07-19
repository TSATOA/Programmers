#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int solution(string name) {
    int answer = 0;
    string a;
    for (int i = 0; i < name.length(); i++)
    {
        a += 'A';

    }
    int i = 0;
    queue<pair<pair<string, int>,int>> q;
    q.push({ {a,answer},0 });


    while (!q.empty())
    {
        string d = q.front().first.first;
        int cnt = q.front().first.second;
        int i = q.front().second;
        q.pop();
        if (d[i] != name[i])
        {
            if ((name[i] - 'A') * 2 > ('Z' - 'A'))
                cnt += 'Z' - name[i] + 1;
            else
                cnt += name[i] - 'A';
            d[i] = name[i];
        }

        int l = i, r = i;
        if (d == name) {
            answer = cnt;
            break;
        }
        l -= 1, r += 1;
        if (l < 0)
            l = a.length() - 1;
        if (r >= a.length())
            r = 0;
        i = r;
        q.push({ {d,cnt + 1},r });
        i = l;
        q.push({ {d,cnt + 1},l });

    }

    return answer;
}