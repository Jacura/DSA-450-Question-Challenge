//Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

//Integers in each row are sorted from left to right.
//The first integer of each row is greater than the last integer of the previous row.

#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
    ll r,c;
    cin>>r>>c;
    ll ar[r][c] ;
    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++)
         cin>>ar[i][j];
    }
    ll value;
    cin>>value;
    
    ll peak ;
    ll row=0,chalna=0;
    for(ll i=0;i<r;i++)
    {
        peak=ar[i][0];
        if(peak>value)
        {
            chalna=1;
            row=i-1;
            break;
        }
    }
    if(chalna==0)
     row=r-1;
    //cout<<row;

    
    ll i=0,j=c-1;

    while(i<=j){
      ll mid=(i+j)/2;
      if(ar[row][mid]==value){
       cout<<row+1<<" "<<mid+1<<endl;
       break;
       }
      else if(ar[row][mid]>value){
          j=mid-1;
      }
      else{
          i=mid+1;
      }

    }
    
    return 0;
}
