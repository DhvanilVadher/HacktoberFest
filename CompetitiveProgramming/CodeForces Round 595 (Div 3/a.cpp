#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(int i = 0 ; i < n ; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		ll flag = 0;
		for(int i = 0 ; i <n-1 ; i++){
			if(a[i]==a[i+1]-1)flag = 1;
		}
		if(flag == 1){
			cout<<2<<endl;
		}
		else{
			cout<<1<<endl;
		}
	}
}
