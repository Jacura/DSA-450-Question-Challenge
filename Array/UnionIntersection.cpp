//Program to find Union and Intersection of two unsorted arrays
//
//
//Another Method ---> Use of Map As in map we have only one unique key.
//Store its value as-->
//mp.insert({ar[i],i}) pair
///****Given two unsorted arrays that represent two sets (elements in every array are distinct)******////
//We can use only one set instead of two s1,s2.
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n,m;
    cin>>n>>m;
    ll ar[n],br[m];
    set<ll> s1,s2;
    for(ll i=0;i<n;i++){
     cin>>ar[i];
     s1.insert(ar[i]);
    }
    for(ll i=0;i<m;i++){
     cin>>br[i];
     s2.insert(br[i]);
    }
    //for intersection
    cout<<"Intersection of Arrays:";
    for(auto i:s1){
        if(s2.count(i)!=0)
         cout<<i<<" ";
    }

    cout<<endl;

    //for Union
    cout<<"UNION of Arrays:";
    for(auto i:s1)
     cout<<i<<" ";

    for(auto i:s2){
        if(s1.count(i)==0)
         cout<<i<<" ";
    }
  

    return 0;
}



             





























