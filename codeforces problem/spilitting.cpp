#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        // Sort the array in descending order
        sort(a.rbegin(), a.rend());
        
        // Calculate initial score difference
        long long alice_sum = 0, bob_sum = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) alice_sum += a[i];
            else bob_sum += a[i];
        }
        
        long long min_score = alice_sum - bob_sum;
        
        // Try to minimize the score by increasing Alice's selected items
        long long current_increase = 0;
        for (int i = 0; i < n && current_increase < k; ++i) {
            if (i % 2 == 0) {
                long long possible_increase = min(a[i] + k - current_increase, a[i]);
                current_increase += possible_increase - a[i];
                alice_sum += possible_increase - a[i];
            }
            min_score = min(min_score, alice_sum - bob_sum);
        }
        
        cout << min_score << endl;
    }
    
    return 0;
}
