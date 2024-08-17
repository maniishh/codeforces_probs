#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=s.length();
    int Uppcnt=0;
    int lowcnt=0;
    for(int i=0;i<len;i++){
        if(s[i]>=65&&s[i]<=90){
            Uppcnt++;
        }
       else if(s[i]>=97&&s[i]<=122){
        lowcnt++;
       }
    }
    if(Uppcnt>lowcnt){
          transform(s.begin(), s.end(), s.begin(), 
              ::toupper);
    }

else{
    transform(s.begin(), s.end(), s.begin(), 
              ::tolower);
}
cout<<s;
return 0;
}