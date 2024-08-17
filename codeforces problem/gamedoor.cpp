#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r, L, R;
        cin >> l >> r ;
        cin>> L >> R;

        if (r < L) {
            // No overlap, Bob is completely to the right of Alice
            cout << L - r << endl;
        } else if (R < l) {
            // No overlap, Bob is completely to the left of Alice
            cout << l - R << endl;
        } else {
            // Overlapping segments, we need to lock at least one door between the two segments
            cout << 0 << endl;
        }
    }

    return 0;
}
