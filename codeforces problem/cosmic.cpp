#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases
    
    while (t--) {
        int n;
        cin >> n; // number of pairs

        vector<pair<int, int>> pairs(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> pairs[i].first >> pairs[i].second;
        }
        
        vector<int> strengths(n);
        strengths[0] = 1; // The strength of the sequence with only the first pair

        // Calculate the strength for each prefix
        for (int i = 1; i < n; ++i) {
            // If current pair's value is different from the previous, it creates a new segment
            if (pairs[i].second != pairs[i - 1].second) {
                strengths[i] = strengths[i - 1] + 1;
            } else {
                strengths[i] = strengths[i - 1];
            }
        }

        // Output the strength for each prefix
        for (int i = 0; i < n; ++i) {
            cout << strengths[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
