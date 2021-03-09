//Program to find Maximum contiguous sum
//
//Code fails when all numbers are nagative

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
    ll sum=0,num=0;
    for(ll i=0;i<n;i++){
      num+=ar[i];
      if(num<0)
       num=0;
      sum=max(num,sum);
      
    }
    cout<<sum<<"\n";
     


    return 0;
}



             





























