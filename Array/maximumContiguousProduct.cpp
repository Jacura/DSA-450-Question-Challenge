//Program  to find maximum product

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
    ll n;
    cin>>n;
    ll ar[n];
  
    for(ll i=0;i<n;i++){
     cin>>ar[i];
    }
     
    ll max_val=ar[0],min_val=ar[0],result=ar[0];

    for(ll i=1;i<n;i++){
      if(ar[i]<=0)
       swap(max_val,min_val);
      max_val=max(max_val,max_val*ar[i]);
      min_val=min(min_val,min_val*ar[i]);
      result=max(result,max_val);
    }

    cout<<result<<endl;
     


    return 0;
}



             





























