#include<bits/stdc++.h>
using namespace std;
 int hIndex(vector<int>& citations) {
        int n=citations.size();
        map<int,int>mpp;
        int l=0,r=0;
        while(r<n){
       if(citations[l]>=citations[r])
       mpp(citations[l])++;
        }
    }
int main(){
    
}