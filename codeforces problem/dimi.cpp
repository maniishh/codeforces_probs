#include<bits/stdc++.h>
using namespace std;
 bool imp(int number) {
    string numberStr = to_string(number);
    int len=numberStr.length();
    if (numberStr[0] !='1'|| numberStr[1]!='0') {
        return false;
    }
    if(len==3 && numberStr[len-1]=='1'){
        return false;
    }
    if(number==10){
        return false;
    }
    for (int i = 1; i< numberStr.length(); ++i) {
        if (numberStr[i] == '0' && i + 1 < numberStr.length() && numberStr[i + 1] == '0') {
            return false;
        }
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;  
     if (imp(a)) {
        cout <<"YES"<< endl;
    } else {
        cout << "NO" << endl;
    }
    }
    return 0;
}