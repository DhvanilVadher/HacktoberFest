#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,k;
    cin>>n>>k;
    ll a[n],b[n];
 
    for(int i = 0 ; i < n-1; i ++){
        cin>>a[i];
    }
    for(int i = 0 ; i < n-1 ; i ++) {
        cin >> b[i];
    }
    ll c[n][2]={{0}};
    c[0][0] = 0;
    c[0][1] = k;
    cout<<0<<" ";
    for(int i  = 1 ; i < n ; i++){
        c[i][0] = min(c[i-1][0],c[i-1][1])+ a[i-1];
        c[i][1] = min(c[i-1][1]+b[i-1],c[i-1][0]+b[i-1]+k);
        cout<<min(c[i][0],c[i][1])<<" ";
    }
    cout<<endl;
}
