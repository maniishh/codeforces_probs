#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k; // dimensions of the grid and the magic constant
        
        // Calculate the minimum number of colors needed
        int colors = ((n + k - 1) / k) * ((m + k - 1) / k);
        
        cout << colors << endl;
    }
    return 0;
}
