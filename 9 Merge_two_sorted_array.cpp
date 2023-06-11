#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m,
                                 int n) {
  int end = m - 1;
  int start = 0;
    while(arr1[end]>arr2[start]&& start<=n-1 && end>=0){
        swap(arr1[end],arr2[start]);
        end--; start++;
}
    sort(arr1.begin(), arr1.begin()+m);
    sort(arr2.begin(), arr2.end());
    int j = 0;
    for(int i=m;i<m+n;i++){
        arr1[i]=arr2[j];
        j++;
    }
    return arr1;
}
