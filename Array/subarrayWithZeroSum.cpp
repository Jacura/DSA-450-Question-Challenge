//Find if there is a subarray with 0 sum

#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    ll n ;
    cin>>n;
     
    ll ar[n];
    set<ll> s;
    ll sum=0;
    bool h=false;
    for(ll i=0;i<n;i++){
     cin>>ar[i];
     sum+=ar[i];
     if(s.count(sum))
      h=true;
     else
      s.insert(sum);
    }
 
    if(h)
     cout<<"TRUE"<<endl;
    else 
     cout<<"FALSE"<<endl;
     
      
    
    


    
    return 0;

}
