#include<bits/stdc++.h>
using namespace std;
int main(){
	int test=1;
	while(test--){
		int n;
		cin>>n;
		vector<int>vec1(n,0);
		for(int i=0;i<n;i++)cin>>vec1[i];
		int q;
		cin>>q;
		vector<vector<int>>que;
		for(int i=0;i<q;i++){
			int a,b;
			cin>>a>>b;
			vector<int>samp={a,b};
			que.push_back(samp);
		}
		vector<vector<int>>res(n,vector<int>(32,0));
		for(int i=0;i<n;i++){
			for(int j=16;j>=0;j--){
				if((1<<j)&vec1[i]) res[i][j]=1;
				if(i!=0) res[i][j]+=res[i-1][j];
				cout<<res[i][j]<<" ";
			}
			cout<<endl;
		}
		
		for(int l=0;l<q;l++){
			int ans=0;
			int left=que[l][0],right=que[l][1];
			for(int i=16;i>=0;i--){
				if((res[right][i]-res[left][i])){
					ans=(1<<i)|ans;
				}
				//else cout<<0<<" ";
			}
			cout<<ans<<endl;;
		}	
	}
}