
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
    ll r,c;
    cin>>r>>c;
    ll ar[r][c] ;
    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++)
         cin>>ar[i][j];
    }
     
    ll ma=-1,mi=100000000;
    for(ll i=0;i<r;i++){
        mi=min(mi,ar[i][0]);
        ma=max(ma,ar[i][c-1]);
    }

    ll count=(r*c+1)/2;
    while(mi<ma){
        ll nount=0;
        ll mid=mi+(ma-mi)/2;
        for(ll i=0;i<r;i++){
          nount+=upper_bound(ar[i],ar[i]+c,mid)-ar[i];
        }
         
        if(nount<count){
            mi=mid+1;
        }
        else
            ma=mid;
    
    }
    cout<<mi;
           
      
    
    return 0;
}
