#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	int slow = 0;
	int fast = 0;
	do{
		slow = nums[slow];
		fast = nums[nums[fast]];
	}while(slow!=fast);
	fast = nums[0];
	while(slow!=fast){
		slow = nums[slow];
		fast = nums[fast];
	}
	return slow;
}
