#include <iostream>
#include <vector>

using namespace std;

// Function to generate k distinct points centered around (xc, yc)
vector<pair<long long, long long>> generatePoints(int xc, int yc, int k) {
    vector<pair<long long, long long>> points;
    for (int i = 0; i < k; ++i) {
        // Distribute points by alternating adding/subtracting i from xc and yc
        long long x = xc + i;
        long long y = yc + i * i;
        points.emplace_back(x, y);
    }
    return points;
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int xc, yc, k;
        cin >> xc >> yc >> k;

        // Get k distinct points centered around (xc, yc)
        vector<pair<long long, long long>> points = generatePoints(xc, yc, k);

        // Output each point
        for (const auto& point : points) {
            cout << point.first << " " << point.second << endl;
        }
    }

    return 0;
}
