#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x,y;
    for(int i=1;i<=t;i++){
 cin>>x>>y;
              if(x<=y){
            cout<<x<<" "<<y;
        }
else{
       cout<<y<<" "<<x;
}
    }
    return 0;
}