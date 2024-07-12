#include <iostream> 
using namespace std; 

class Solution {
public:
	int gcd(int a, int b) { 
		if (a == 0) 
			return b; 
		if (b == 0) 
			return a; 
		if (a == b) 
			return a; 
		if (a	 > b) 
			return gcd(a - b, b); 
	
		return gcd(a, b - a); 
	} 
};
 
int main() { 
	int a, b; 
	cin>>a>>b;
	Solution solution;
	int ans = solution.gcd(a, b);
	cout << "GCD of " << a << " and " << b << " is "<< ans; 
	return 0; 
}
