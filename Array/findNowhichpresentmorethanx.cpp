//Program  Given an array of size n and a number k, find all elements that appear more than n/k times

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
    ll n,k;
    cin>>n>>k;
    ll ar[n],x;
    x=n/k;
    unordered_map<ll,ll> s;
     
    for(ll i=0;i<n;i++){
     cin>>ar[i];
     
     s[ar[i]]++;
    }
     
     
     
    for(auto i:s){
      if(i.second > x)
        cout<<i.first<<" ";
       
    }

    

    return 0;
}



             





























