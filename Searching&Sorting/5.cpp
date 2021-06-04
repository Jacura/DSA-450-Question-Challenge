//Middle of three numbers

//can be done using 4 comparisons

//approch for 3 comparisons

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
    ll a,b,c;
    cin>>a>>b>>c;

    ll x=a-b;
    ll y=a-c;
    ll z=b-c;

    if(x*z>0)
     cout<<b;
    else if(x*y<0)
     cout<<a;
    else 
     cout<<c;


    return 0;
}



             





























