#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int maxDiff(vector<int>& nums) {
		int n = nums.size();
		int maxi = INT_MIN;
		int mini = INT_MAX;
		for(int i=0;i<n;i++) {
			maxi = max(maxi, nums[i]);
			mini = min(mini, nums[i]);
		}

		return maxi - mini;
	}
};

int main() {
	vector<int> nums = {1,2,3,4,5,6};
	Solution solution;
	int ans = solution.maxDiff(nums);

	cout<<"max difference in an array is: "<<ans<<endl;
}