#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> freq(26, 0);
        int j = 0, ans = 0;
        for(int i=0;i<n;i++) {
            freq[s[i] - 'a']++;

            while(j < i && freq[s[i] - 'a'] > 1) {
                freq[s[j] - 'a']--;
                j++;
            }

            ans = max(ans, i-j+1);
        }

        return ans;
    }
};

int main() {
    string s;
    cin>>s;

    Solution solution;
    int ans = solution.lengthOfLongestSubstring(s);

    cout<<ans<<endl;

    return 0;
}

