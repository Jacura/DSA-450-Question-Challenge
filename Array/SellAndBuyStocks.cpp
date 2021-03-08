//Best time to buy and sell stock in O(n)
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
 
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
     cin>>arr[i];
	 
	ll x=arr[0],profit=0,cost;
    for(ll i=1;i<n;i++){
        x=min(x,arr[i]);
        cost=arr[i]-x;
        profit=max(profit,cost);

    }
    cout<<profit<<endl;

	return 0;
}
 
 //Aother cool Method:
 ////Best time to buy and sell stock in O(n)
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
 
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
     cin>>arr[i];
	 
	ll x=arr[0],profit=0,cost;
    for(ll i=1;i<n;i++){
        x=min(x,arr[i]);
        cost=arr[i]-x;
        profit=max(profit,cost);

    }
    cout<<profit<<endl;

	return 0;
}
 
//Another cool Method
//https://www.geeksforgeeks.org/maximum-difference-between-two-elements/