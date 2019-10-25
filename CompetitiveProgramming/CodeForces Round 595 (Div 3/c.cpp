#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
long long int pow(long long int n){
    long long int mul = 1;
    for(int i =0  ; i < n ; i++){
        mul = mul * 3;
    }
    return  mul;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll i = 0 ;
        ll a[64] = {0};
        while(i<64)
        {
            a[i] = n%3;
            n/=3;
            //cout<<a[i];
            i++;
        }
       // cout<<endl;
        int flag = 0;
 
        for(int i = 63 ; i >=0 ; i--){
            if(a[i]==2) {
                i++;
                while(a[i]!=0){
                    i++;
                }
                a[i]=1;
                for(int j = 0 ; j < i ; j++){
                    a[j] = 0;
                }
                break;
            }
        }
        ll ans = 0;
        for(int i = 0 ; i < 64 ; i++){
            if(a[i]!=0)
                ans += pow(i);
        }
        cout<<ans<<endl;
    }
}

