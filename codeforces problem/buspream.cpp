#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums;
        bool flag=true;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            nums.push_back(temp);
            
            if(i!=0 && flag==true){
                if(find(nums.begin(),nums.end(),temp+1)==nums.end()&&find(nums.begin(),nums.end(),temp-1)==nums.end()){
                    cout<<"NO"<<endl;
                    flag=false;

                }
                // else if(find(nums.begin(),nums.end(),temp-1)==nums.end()){
                //     cout<<"N"<<endl;
                //     flag=false;
                // }

            }
            
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }

    }
    return 0;
}