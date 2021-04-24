//Value equal to index value


#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
// Indexing starts from '1'
ll binary_search(ll ar[],ll n){
    ll start = 1;
    ll end = n;
    ll mid;
    while(start<=end){

        mid = (start+end)/2;
 
        if(ar[mid]==mid){
            return mid;
        }
        else if(ar[mid]<mid){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
       // cout<<start<<" "<<end<<" "<<mid<<endl;

    }
    return -1;
}

int main() {
     ll n;
     cin>>n;
     ll ar[n+1];
     for(ll i=1;i<=n;i++)
      cin>>ar[i];
     cout<<binary_search(ar,n)<<endl;
}
