//sample code to submit and check

#include <bits/stdc++.h>
using namespace std;
# define ll long long int
// manthan surkar  ((smallstar)) 
						

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t,k;
	ll a[1005];
        cin>>t;
        cin>>k;

for(int i=0;i<t;i++){
    int j;
    
    cin>>j;
    a[j]++;
}
 ll ans=0;
  
    int j=1;
    int m=k;
    if(t%2==0){
        k=t/2;
    }
    else{
        k=t/2+1;
    }
   // cout<<k;
    for(int i=1;i<=m;i++){
      // cout<<a[i];
          while(k>0 && a[i]>1){
         
              a[i]=a[i]-2;
                k--;
              ans=ans+2;
          
           }
    
    }
   
  // cout<<ans;
    int i=1;
    while(k>0 && i<=m){
        if(a[i]==1){
            ans++;
           
            k--;

        }
         i++;
    }
    cout<<ans<<endl;
   
   
}
