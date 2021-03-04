//Program to find the Kth  smallest element in O(n) time complexity

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n,k;
    cin>>n>>k;
    ll ar[n];
    
    ll ma=-1;
    for(ll i=0;i<n;i++){
     cin>>ar[i];
     ma=max(ma,ar[i]);
    }
    
    ll frq[ma+1];
    memset(frq,0,sizeof(frq));

    for(ll i=0;i<n;i++){
     frq[ar[i]]++;
    }
    ll count=0,ans=0;
    for(ll i=1;i<=ma;i++){
        if(count<k){
          count+=frq[i];
        }
        if(count>=k){
         ans=i;
         break;
         }
    }
    cout<<ans<<endl;

    return 0;
}



