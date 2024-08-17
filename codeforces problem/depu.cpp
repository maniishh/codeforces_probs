#include <bits/stdc++.h>
using namespace std;
int equall(int arr[],int n){
     int temp = INT_MIN;
	 int p = 1;
  for(int i = 0; i<n; i++){
	    for(int j = i+1; j<n; j++){
            if(arr[j] == arr[i]){
	             p++;
	        }
	    }
	  if(temp < p){
	        temp = p;
	       }
	  p=1;
	    }
	    int z = n - temp;
	    return z;
    
}

int main() {
	int n;
	cin>>n;
	for(int i =0; i<n; i++){
	    int k;
	    cin>>k;
	    int array[k];
	    for(int i = 0; i<k; i++){
	        cin>>array[i];
	    }
	    cout<<equall(array,k);
	    
	   
	}
	

}