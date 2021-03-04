//Program to find Min and Max in Minimum Number of comaprisons
//One method is select first two elements of array and then let m1=min(ar[0],ar[1])
//and m2=max(ar[0],ar[1]). Then, pick next element and compare with others.
//No. of comparisons in this case : 1+2*(n-2) in worst case(descending order)
//1+(n-2) average case

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll ar[n];
    memset(ar, n, 0);
    for (ll i = 0; i < n; i++)
        cin >> ar[i];
    ll m1=1000000,m2=-1;
    if (n % 2 == 0)
    {
        m1 = min(ar[0], ar[1]);         //calculating m1 and m2 takes only 
                                        //one comparison 
        m2 = max(ar[0], ar[1]);
        for(ll i=2;i<n;i+=2){
            ll x,y;
            x=min(ar[i],ar[i+1]);       //calculating x,y takes only one comparison
            y=max(ar[i],ar[i+1]);
            
            if(m1>x)
             m1=x;                       
            if(m2<y)
             m2=y;

        }
    }else if(n%2!=0){
        m1=ar[0];
        m2=ar[0];
        for(ll i=1;i<n;i+=2){
            ll x,y;
            x=min(ar[i],ar[i+1]);       //calculating x,y takes only one comparison
            y=max(ar[i],ar[i+1]);
            
            if(m1>x)
             m1=x;                       
            if(m2<y)
             m2=y;

        }
    }

    cout<<m1<<" "<<m2<<" ";


    return 0;
}


//No. of comaprisons:
//worst case:-- 1>  n==even
//                  comparisons=1+3*(n-2)/2

//                  n==odd
//                  comparisons=3*(n-1)/2