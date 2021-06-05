//Find the Majority Element

//map method
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
    ll n;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
     
    
    int rep = 0;
    unordered_map<int,int> mp;
    for(int i:ar){
      if(mp.find(i)==mp.end()){
          mp[i]=1;
      }
      else{
          mp[i]++;
      }
    }
    
    int check = n/2,newcheck=0;
    
    for(auto i: mp){
       if(i.second>check){
         cout<< i.first ; 
         newcheck=1;
         break;}
    }
    
    if(newcheck == 0)
     cout<<-1<<endl;
}



             





























