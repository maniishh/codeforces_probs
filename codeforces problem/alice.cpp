#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Find the maximum element in the array
        int maxElement = *max_element(a.begin(), a.end());
        
        // Count how many times the maximum element appears in the array
        int maxCount = count(a.begin(), a.end(), maxElement);
        
        // Alice wins if the max element is unique (appears only once)
        if (maxCount == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

