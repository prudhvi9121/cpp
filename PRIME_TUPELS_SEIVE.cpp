#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n=1000000;
vector<ll> seive(n,1);
void Prime(){
	seive[0]=0;
	seive[1]=0;
	for(int i=2;i*i<n;i++){
		for(int j=i*i;j<n;j+=i)
			seive[j]=0;
	}
}
int main(){
	Prime();
	int test=1;
	cin>>test;
	while(test--){
		int k;
		cin>>k;
		int cnt=0;
		for(int i=3;i<=k;i++){
			if(seive[i] and seive[2+i] and 2+i<=k) {
				//cout<<i<<" : ";
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}	
}