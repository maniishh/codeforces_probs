#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

// Function to calculate the greatest common divisor
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        long long n, m, l, f;
        cin >> n >> m >> l >> f;

        
        long long max_score = 0;
         
        max_score = max(max_score, l * n);
 
         
        max_score = max(max_score, f * m);
        
       
        for (long long WL = 1; WL <= n; ++WL) { 
            if (WL > 0) {
                long long WF = (m / WL) * WL;  
                if (WF > 0 && gcd(WL, WF) == 1) {
                    max_score = max(max_score, l * WL + f * WF);
                }
            }
        }

        for (long long WF = 1; WF <= m; ++WF) { 
            if (WF > 0) {
                long long WL = (n / WF) * WF; 
                if (WL > 0 && gcd(WL, WF) == 1) {
                    max_score = max(max_score, l * WL + f * WF);
                }
            }
        }

        cout << max_score << endl;
    }

    return 0;
}
