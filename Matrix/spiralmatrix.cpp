//Program of Spirally traversing a matrix

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
    ll n=c;
    ll m=r;
    ll dir=0,top=0,button=m-1,left=0,right=n-1;
    while(top<=button && right>=left){
        //Left Dir.
        if(dir==0){
           for(ll i=left;i<=right;i++){
               cout<<ar[top][i]<<" ";
           }
           top++;
           dir++;
        }
        if(dir==1){
          for(ll i=top;i<=button;i++){
              cout<<ar[i][right]<<" ";
          }
           
          right--;
          dir++;
        }
        if(dir==2){
            for(ll i=right;i>=left;i--){
                cout<<ar[button][i]<<" ";
            }
             dir++;
            button--;
        }
         if(dir==3){
            for(ll i=button;i>=top;i--){
                cout<<ar[i][left]<<" ";
            }
            dir++;
            left++;
        }

        dir=0;

    }
    return 0;
}
