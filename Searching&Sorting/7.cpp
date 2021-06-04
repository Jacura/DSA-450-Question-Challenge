//Find the repeating and the missing

//Many Methods to solve this one

//Below method uses map
//XOR method Left

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
    ll n;
    cin>>n;
    ll ar[n],sum1=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum1+=ar[i];
    }
    ll sum2 = (n*(n+1))/2;
    
    int rep = 0;
    unordered_map<int,bool> mp;
    for(int i:ar){
      if(mp.find(i)==mp.end()){
          mp[i]=true;
      }
      else{
          rep = i;
          break;
      }
    }
    sum1-=rep;
    int mis = sum2 - sum1;
    cout<<rep<<" "<<mis<<endl;
    
    return 0;
}



             





























