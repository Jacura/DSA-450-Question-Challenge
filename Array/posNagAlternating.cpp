//Program of Rearrange array in alternating positive & negative items with O(1) extra space 
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    ll n ;
    cin>>n;
     
    ll ar[n];
    ll countzero=0;
    for(ll i=0;i<n;i++){
     cin>>ar[i];
      
    }

    ll i=0,j=n-1;
    while(i<n && j>=0 && i<j){
       // cout<"hj";
        if(ar[i]>0 && ar[j]<0)
        {
            swap(ar[i],ar[j]);
            i++;j--;
        }
        else if(ar[i]<0 && ar[j]<0){
            i++;
        }
         else if(ar[i]>0 && ar[j]>0){
            j--;
        }
        else{
         i++;j--;}
         
    }
    
    if(j%2!=0)
     j++;
    for(ll l=1;l<i;l+=2)
    {
        if(j<n){
         swap(ar[l],ar[j]);
         j+=2;}
    }
    // all nagative no.s should be placed at even positions
    // all positive no.s should be placed at odd positions
    //IN 0 Based Indexing

    for(ll g=0;g<n;g++)
     cout<<ar[g]<<" ";
         
   


    
    return 0;

}
