//Program  to find Longest COnsequetive Sequence

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
    ll n;
    cin>>n;
    ll ar[n];
    set<ll> s;
    ll max_element=0;
    for(ll i=0;i<n;i++){
     cin>>ar[i];
     max_element=max(max_element,ar[i]);
     s.insert(ar[i]);
    }
     
     
    ll c=0,ans=1;
    for(ll i=1;i<=max_element;i++){
      if(s.count(i)==0)
       c=0;
      else  
       c++;
      ans=max(ans,c);
       
       
    }

    cout<<ans<<endl;
     


    return 0;
}



             





























