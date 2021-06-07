//find quadruple of given sum



#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
    ll n,k;
    cin>>n>>k;
    ll ar[n];

    map<int,pair<int,int>> mp;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mp[ar[i]+ar[j]]={i,j};
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum = k - (ar[i]+ar[j]) ;
            if(mp.find(sum)!=mp.end() ){
                
                pair <int,int> p = mp[sum];
                int x = p.first;
                int y= p.second;
                if(x!=i && x!=j && y!=i && y!=j){
                    cout<<"Quadruple found :"<<ar[i]<<" "<<ar[j]<<" "<<ar[x]<<" "<<ar[y]<<endl;
                    return 0;
                }
            }
        }
    }


}



             





























