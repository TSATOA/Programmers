#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;

    unordered_map<string,int> plays_sum; //각 장르별 재생 횟수 합
    unordered_map<string,pair<int,int>> max_min; //각 장르별 1,2등

    int cnt = 0;
    for(int i=0;i<genres.size();i++){
        //처음 장르 등장시 
        if(plays_sum[genres[i]]==0){
            plays_sum[genres[i]]=plays[i];
            max_min[genres[i]]={i,-1};
        }else{
            //똑같은 장르 등장시 
            plays_sum[genres[i]]+=plays[i];
            //
            if(plays[max_min[genres[i]].first]<plays[i]){
                max_min[genres[i]].second = max_min[genres[i]].first;
                max_min[genres[i]].first = i;
                cnt=0;
            }else if(plays[max_min[genres[i]].first]==plays[i]&&cnt==0){
                max_min[genres[i]].second = i;
                cnt=1;
            }else if(max_min[genres[i]].second==-1){
                max_min[genres[i]].second = i;
            }else if(plays[max_min[genres[i]].first]>plays[i]&&plays[max_min[genres[i]].second]<plays[i]){
                max_min[genres[i]].second = i;
            }
            
        }
    }
    
    vector<pair<string,int>> v_plays_sum(plays_sum.begin(),plays_sum.end());
    
    sort(v_plays_sum.begin(),v_plays_sum.end(),[](pair<string,int> a, pair<string,int> b){return a.second>b.second;});
    
    for(int i=0;i<v_plays_sum.size();i++){
        cout << v_plays_sum[i].first << " " << v_plays_sum[i].second << endl;
    }
    
    for(int i=0;i<v_plays_sum.size();i++){
        if(max_min[v_plays_sum[i].first].second==-1){
            answer.push_back(max_min[v_plays_sum[i].first].first);
        }else{
        answer.push_back(max_min[v_plays_sum[i].first].first);
        answer.push_back(max_min[v_plays_sum[i].first].second);
        }
    }
    
    return answer;
}


