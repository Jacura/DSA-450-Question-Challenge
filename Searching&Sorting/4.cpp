//Squareroot of an interger

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
    ll n;
    cin>>n;
     
    if(sqrt(n) == floor(sqrt(n)) )
     cout<<n-1;
    else
     cout<<n;
     


    return 0;