//Find Pair Given Difference



#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
    ll n,k;
    cin>>n>>k;
    ll ar[n];

    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        mp[ar[i]]=1;
    }
    int check=0;

    for(int i=0;i<n;i++){
        int temp = ar[i]+k;
        if(mp[temp]==1 && temp>=0)
        {
            cout<<"Yes"<<endl;
            check=1;
        }
    }
    
    if(check == 0)
     cout<<"No"<<endl;


    
}



             





























