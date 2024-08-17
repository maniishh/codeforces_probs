#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;  

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];   
        }

      
        int maxAIndex = 0, maxBIndex = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] == n) maxAIndex = i;
            if (b[i] == n) maxBIndex = i;
        }

        
        if (maxBIndex == 0 || maxBIndex == n - 1) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }
    return 0;
}