//Stickler Thief

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
    ll n;
    cin>>n;

    int ar[n];
    for(int i=0;i<n;i++)
     cin>>ar[i];

    int dp[n] = {0};

    dp[0] = ar[0];

    for(int i=1;i<n;i++){
        if(i==1){
            dp[i] = max(dp[0],dp[1]);
        }
        else
         dp[i] = max(dp[i-1],dp[i-2]+ar[i]);
    }

    cout<<dp[n-1];
    
}



             





























