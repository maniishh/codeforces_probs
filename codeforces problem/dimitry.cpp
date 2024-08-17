#include <iostream>
#include <string>

bool isValidForm(int number) {
    // Convert number to string to analyze its pattern
    std::string s = std::to_string(number);

    // Check if the number starts with '1' followed by '0' or more characters
    if (s[0] != '1'&&s[1]==0) {
        return false;
    }

    // Count the number of zeroes after the leading '1'
    int count_zeroes = 0;
    for (int i = 2; i < s.size(); ++i) {
        if (s[i] == '0') {
            count_zeroes++;
        } else {
            break;
        }
    }

    // At least two zeroes are needed for the form 10^x, where x >= 2
    // If there are no non-zero digits after initial zeroes, count_zeroes must be >= 2
    // Otherwise, the total length (including digits after zeroes) should be >= 3
    if (count_zeroes >= 2 || (count_zeroes > 0 && s.size() >= 3)) {
        return true;
    }

    return false;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int a;
        std::cin >> a;

        if (isValidForm(a)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
