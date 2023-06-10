#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    int i = 0,k=0;
    for( i = n-2; i>=0; i--){
        if(p[i]<p[i+1])break;
    }      
    if(i<0)reverse(p.begin(),p.end());
    else{
        for( k = n-1; k>i; k--){
            if(p[k]>p[i]){
                break;
            }
        }
        swap(p[k],p[i]);
        reverse(p.begin()+i+1,p.end());
    }
    return p;
}

Ex : 3 2 1 5 4
   : 3 2 4 5 1
   : 3 2 4 1 5
