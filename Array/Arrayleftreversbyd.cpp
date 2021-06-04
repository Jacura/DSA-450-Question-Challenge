////Program to Cyclically rotate an array by k
//
//

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void reversedarray(ll ar[],ll s,ll e){
    while(s<=e){
        ll x=ar[e];
        ar[e]=ar[s];
        ar[s]=x;
        s++;
        e--;
    }
}
 
int main() {
    ll n,k;
    cin>>n>>k;
    ll ar[n];
  
    for(ll i=0;i<n;i++){
     cin>>ar[i];
     
    }
    reversedarray(ar,0,k-1);
    reversedarray(ar,k,n-1);
    reversedarray(ar,0,n-1);
    for(ll i=0;i<n;i++){
       cout<<ar[i]<<" ";
    }


    return 0;
}



             





























