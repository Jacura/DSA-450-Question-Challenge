//Print Duplicate of characters in String

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 

int main() {
      
    string s;
    cin>>s;
    map<char,int> mp;
    for(ll i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(auto i:mp){
        if(i.second>1)
         cout<<i.first<<" "<<i.second<<endl;
    }
 
    return 0;

}
