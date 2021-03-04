//Program to Move all negative numbers to beginning and positive to end with constant extra space

//One More Method:--->
//Two Pointer Approach: The idea is to solve this problem with constant space and linear time is by using a two-pointer or two-variable approach where we simply take two variables like left and right which hold the 0 and N-1 indexes. Just need to check that :
//Above Method Algorithm
//Check If the left and right pointer elements are negative then simply increment the left pointer.
//Otherwise, if the left element is positive and the right element is negative then simply swap the elements, and Simultaneously increment or decrement the left and right pointers.
//Else if the left element is positive and the right element is also positive then simply decrement the right pointer.
//Repeat the above 3 steps until the left pointer ≤ right pointer.

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n;
    cin>>n;
    ll ar[n];
    //ll countpos=0,countnag=0;
    for(ll i=0;i<n;i++){
     cin>>ar[i];
    }

     ll i=0;
    for(ll k=0;k<n;k++){
        if(ar[k]<0 ){
            if(i!=k){
                swap(ar[i],ar[k]);
            }
            i++;
        }
    }
    
    for(ll j=0;j<n;j++)
     cout<<ar[j]<<" ";


    return 0;
}



