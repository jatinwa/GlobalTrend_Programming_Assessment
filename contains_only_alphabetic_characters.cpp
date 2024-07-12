#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool check(string& s) {
		int n = s.size();
		for(int i=0;i<n;i++) {
			if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
				continue;
			}
			else {
				return false;
			}
		}
		return true;
	}
};

int main() {
	string s = "ABCccd4ccd";
	Solution solution;
	if(solution.check(s)) {
		cout<<"string contains alphabetic characters"<<endl;
	}
	else {
		cout<<"string contains charatcers other than alphanumeric characters"<<endl;
	}
	return 0;
}