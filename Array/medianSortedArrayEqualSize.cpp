#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
    ll n;
    cin>>n;
    ll ar[n]={0},br[n]={0};
    for(ll i=0;i<n;i++)
     cin>>ar[i];
    for(ll i=0;i<n;i++)
     cin>>br[i];
    ll sum=0;

 
      ll t1=0,t2=0;
      while(t1+t2!=n+2){
          if(ar[t1]>br[t2])
          {
              t2++;
              if(t1+t2==n||t1+t2==n+1)
               sum+=br[t2-1];
               
          }
          else{
              t1++;
              if(t1+t2==n||t1+t2==n+1)
               sum+=ar[t1-1];
          } 
          
      }
      

 
    cout<<sum/2<<endl;

    return 0;
}
