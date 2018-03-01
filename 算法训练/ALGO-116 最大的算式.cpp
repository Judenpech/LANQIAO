#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;

ll dp[20][20];//dp[i][j]表示前i个数放入j个乘号所能得到的最大值
int a[20],sum[20];
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sum[0]=0;
	for(int i=1;i<=n;i++){
		sum[i]=sum[i-1]+a[i];
		dp[i][0]=sum[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			for(int p=1;p<i;p++){
				if(j-1<p){
					dp[i][j]=max(dp[i][j],dp[p][j-1]*(sum[i]-sum[p]));
				}
			}
		}
	}
	cout<<dp[n][k]<<endl;
	return 0;
}
