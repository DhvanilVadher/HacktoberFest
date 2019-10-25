#include<bits/stdc++.h>
using namespace std;
int bfs(int a[],int n ,int num,int ans[]){
	int count = 0;
	set<int>s;
	while(ans[num]==0){
		ans[num]++;
		num = a[num];
		s.insert(num);
		count++;
	}
	set<int>:: iterator it;	
	for(it= s.begin(); it != s.end() ; it++){
		ans[*it] = count;
	}
	return 0;
}
int main()
{
	int t,n,i,a[1000000],ans[1000000];
	cin>>t;
	while(t--){
		cin>>n;
		
		for(i = 1 ; i <= n ; i++){
			cin>>a[i];
			ans[i] = 0;
			if(i==a[i]){
				ans[i] = 1;
			}
		}
		for(i = 1 ; i <= n ; i++){
			if(ans[i]==0){
			    bfs(a,n,i,ans);
			}
		}
		for(i = 1 ; i <= n ; i++){
		    cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}
