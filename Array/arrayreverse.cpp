//Program to Reverse the Array Or String

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n;
    cin>>n;
    ll ar[n+1];
    memset(ar,n+1,0);
    for(ll i=1;i<=n;i++)
     cin>>ar[i];
    
    for(ll i=1;i<=n/2;i++){
       
       swap(ar[i],ar[n -i+1]);
       
    }
     
     for(ll i=1;i<=n;i++)
      cout<<ar[i]<<" ";



    
    return 0;
}



