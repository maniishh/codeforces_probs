#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

bool seated(const vector<int>& a) {
    unordered_set<int> occupied;  
    occupied.insert(a[0]);

    for (int i = 1; i < a.size(); ++i) {
        int seat = a[i];
        if (occupied.count(seat - 1) == 0 && occupied.count(seat + 1) == 0) {
            return false;  
        }

        occupied.insert(seat);
    }
    return true;
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
        
        if (seated(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
