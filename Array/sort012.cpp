//Program to Sort the array 0,1,2 in O(n) time complexity

//One more method (Dutch National Flag Algorithm OR 3-way Partitioning)---->
//Above Method Algorithm:
//Keep three indices low = 1, mid = 1 and high = N and there are four ranges, 1 to low (the range containing 0), low to mid (the range containing 1), mid to high (the range containing unknown elements) and high to N (the range containing 2).
//Traverse the array from start to end and mid is less than high. (Loop counter is i)
//If the element is 0 then swap the element with the element at index low and update low = low + 1 and mid = mid + 1
//If the element is 1 then update mid = mid + 1
//If the element is 2 then swap the element with the element at index high and update high = high – 1 and update i = i – 1. As the swapped element is not processed
//Print the output array.

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n;
    cin>>n;
    ll ar[n];
    
    //ll ma=-1;
    ll freq[3];
    memset(freq,0,sizeof(freq));
    for(ll i=0;i<n;i++){
     cin>>ar[i];
     freq[ar[i]]++;
    }
    ll zerocount=freq[0], onecount=freq[1], twocount=freq[2];
    while(zerocount!=0 || onecount!=0 || twocount!=0){
        while(zerocount!=0){
            cout<<0<<" ";
            zerocount--;
        }
        while(onecount!=0){
            cout<<1<<" ";
            onecount--;
        }
        while(twocount!=0){
            cout<<2<<" ";
            twocount--;
        }
    }
    
    


    return 0;
}



