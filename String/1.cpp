//String Reversal

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 

int main() {
      
    string s;
    cin>>s;
    ll n = s.size(); 
     
    ll i=0,j=n-1;
    while(i<=j){
        swap(s[i],s[j]);
        i++;j--;
    }
    cout<<s;
 
    return 0;

}
