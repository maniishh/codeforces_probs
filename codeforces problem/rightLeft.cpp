#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int maxScore(int n, vector<int>& a,  string& s) {
    int score = 0;
    int start = -1; // To track the start index of 'L'
    
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L') {
            start = i; // Found a start of a segment
        } else if (s[i] == 'R' && start != -1) {
            // Found an 'R' and we have a valid start index
            // Calculate the score for this segment
            int segmentSum = 0;
            for (int j = start; j <= i; ++j) {
                segmentSum += a[j];
            }
            score += segmentSum;
            
            // Mark the segment as used
            for (int j = start; j <= i; ++j) {
                s[j] = '.';
            }
            
            // Reset start index
            start = -1;
        }
    }
    
    return score;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        string s;
        cin >> s;
        
        cout << maxScore(n, a, s) << endl;
    }
    
    return 0;
}
