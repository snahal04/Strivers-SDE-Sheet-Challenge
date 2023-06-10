#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0;
    long long maxi = INT_MIN;
    for(int i =0;i<n; i++){
        sum+=arr[i];
        maxi = max(maxi,sum);
        if(sum<0)sum=0; // IMP
    }
    // if(sum==0)maxi = *max_element(arr,arr+n);
    return (maxi<0)?0:maxi;
}

// Kadane's Algo
