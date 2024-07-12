#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int factorial(int n) {
        
        long long int fact = 1ll;
        for(int i=2;i<=n;i++) {
            fact = fact * i * 1ll;
        }

        return fact;
    }
};

int main() {
    int n;
    cin>>n;

    Solution solution;
    long long int ans = solution.factorial(n);

    cout<<ans<<endl;

    return 0;
}


