#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    stack<int> st;
    int maxi = INT_MIN;
    
    st.push(prices[0]);
    for(auto&i:prices){
        int diff = 0;
        if(st.top()>i)st.push(i);
        else if(st.top()<i){
            diff = i-st.top();
            maxi = max(maxi,diff);
        }
    }
    return (maxi<0)?0:maxi ;
}
T.C = O(n);
S.C = O(n);

More Optimize

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int maxP = 0;
    int minP = INT_MAX;
    for(auto&i:prices){
        minP = min(minP,i);
        maxP = max(max,i-minP);
    }
    return maxP;
}

T.C = O(n);
S.C = O(1);
