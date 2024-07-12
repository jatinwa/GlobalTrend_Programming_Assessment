#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(), k+nums.begin());
    }
};

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    Solution solution;
    solution.rotate(nums, k);

    cout<<"after rotation: "<<endl;
    int n = nums.size();
    for(int i=0;i<n;i++) cout<<nums[i]<<" ";

    return 0;
}


