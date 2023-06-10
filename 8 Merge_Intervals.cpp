#include <bits/stdc++.h> 

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> v;
    sort(begin(intervals), end(intervals));
    vector<int> temp = intervals[0];
    for(auto&i:intervals){
        if(i[0]<=temp[1]){
            temp[1] = max(i[1],temp[1]);
        }
        else{
            v.push_back(temp);
            temp = i;
        }
    }
    v.push_back(temp);
    return v;
}
