#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
   int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
int cnt=0;
int l=0;
int r=1;
while(r<n){
    if(gcd(a[l],a[r])>1){
        cnt++;
        r++;
    }
    l++;
    }
    if(cnt%2==0){
        cout<<"bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
    }
    }
    return 0;

}