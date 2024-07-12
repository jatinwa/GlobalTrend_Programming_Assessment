#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int sumOfDigits(int n) {
		int sum = 0;
		while(n) {
			sum += n%10;
			n /= 10;
		}

		return sum;
	}
};

int main(){
	int n;
	cin>>n;

	Solution solution;
	int ans = solution.sumOfDigits(n);

	cout<<"sum of digits is: "<<ans<<endl;

	return 0;
}