//A Program to check if strings are rotations of each other or not

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 

int main() {
      
    string s1,s2;
    cin>>s1>>s2;
    string s=s1+s1;
    ll k=0,res=0;
    for(ll i=0;i<s.size();i++){
      if(k==s2.size())
      {
          res=1;
          break;
      }
      if(s2[k]==s[i])
       k++;
      else
       k=0;
      
    }
    if(res==1)
     cout<<"YES";
    else 
     cout<<"NO";
 
    return 0;

}
