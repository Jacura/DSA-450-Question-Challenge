#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll n,k;
    cin>>n>>k;
    ll ar[n];
    unordered_map<ll,ll> mp;
    mp.clear();
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
        mp[ar[i]]++;
    }
    ll sum=0;
    for(ll i=0;i<n;i++){
         
         sum+=mp[k-ar[i]];
         if(k-ar[i]==ar[i])
          sum--;
        
    }
    cout<<sum/2<<endl;

    return 0;
}
