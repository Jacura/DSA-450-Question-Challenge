//Check String is pelindrome or not

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 

int main() {
      
    string s;
    cin>>s;
    ll n = s.size(); 
     
    ll i=0,j=n-1,res=0;
    while(i<=j){
        if(s[i]!=s[j]){
            res=1;
            break;
        }
         
         
        i++;j--;
    }
    if(res)
     cout<<"Not Pelindrome";
    else
     cout<<"Yes Pelindrome";
 
    return 0;

}
