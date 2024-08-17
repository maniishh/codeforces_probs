 #include<bits/stdc++.h>
using namespace std; 
bool MT(vector<int>& a,string& s) {
    if (a.size() != s.size()) {
        return false; 
    }
    
unordered_map<int, char> numToChar;
unordered_map<char, int> charToNum;  
    
    for (int i = 0; i < a.size(); ++i) {
        int num = a[i];
        char ch = s[i];

        
        if (numToChar.count(num)) {
            if (numToChar[num] != ch) {
                return false; 
            }
        } else {
            numToChar[num] = ch;
        }

        if (charToNum.count(ch)) {
            if (charToNum[ch] != num) {
                return false;  
            }
        } else {
            charToNum[ch] = num;
        }
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
        
        int m;
        cin >> m;
        
        while (m--) {
            string s;
            cin >> s;
            
            if (MT(a, s)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}
