//Longest Pelindromic String

#include <bits/stdc++.h>
#define ll long long
using namespace std;

string longestPalin(string S)
{
     int n=S.size();
      
     string res,hey;
     int l,h,maxlen=0,r,q,start=0,end=0;
      
     for(int i=1;i<n;i++){
             // for even length pelindrone string
             l=i-1;h=i;
             while(l>=0 && h<n && S[l]==S[h]){
                if(h-l+1>maxlen){
                    maxlen=h-l+1;
                    start=l;end=h;
                }
                l--;
                h++;
             }

             // for odd length pelindronic string
             r=i-1;q=i+1;
             while(r>=0 && q<n && S[r]==S[q]){
                if(q-r+1>maxlen){
                    maxlen=q-r+1;
                    start=r;end=q;
                }
                r--;
                q++;
             }

     }
    string p;
    for(int i=start;i<=end;i++)
     p+=S[i];
    return p;
}

int main() {
      
    string s;
    cin>>s;
   cout<<longestPalin(s);
 
    return 0;

}

