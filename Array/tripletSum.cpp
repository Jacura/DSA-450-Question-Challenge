//Program  Given an array of size n and a number k, find all elements that appear more than n/k times

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
    ll n,k;
    cin>>n>>k;
    ll A[n];
    for(ll i=0;i<n;i++)
     cin>>A[i];
    for (int i = 0; i < n - 2; i++)  
    { 
  
        
        unordered_set<int> s; 
        int curr_sum = k - A[i],h=0; 
        for (int j = i + 1; j < n; j++)  
        { 
            if (s.find(curr_sum - A[j]) != s.end())  
            { 
                 
                cout<<A[i]<<" "<<A[j]<<" "<<curr_sum - A[j]<<endl;
                h=1;
                break;
            } 
            s.insert(A[j]); 
        } 
        if(h==1)
         break;
    }
    
     
    

    

    return 0;
}



             





























