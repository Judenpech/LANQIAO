#include <iostream>
#include <cstring>
#define mod 1000000007
using namespace std;
int main(){
	int k,l;
	int dp[110][110]; //dp[i][j]��ʾ��iλ��������j��ʱ��k����������
	memset(dp,0,sizeof(dp));
	int sum=0;
	cin>>k>>l;
	for(int i=0;i<k;i++){
		dp[1][i]=1;
	}
	for(int i=2;i<=l;i++){
		for(int j=0;j<k;j++){
			for(int q=0;q<k;q++){
				if(q!=j-1 && q!=j+1){
					dp[i][j]+=dp[i-1][q];
					dp[i][j]%=mod;
				}
			}
		}
	}
	for(int i=1;i<k;i++){ //��һλΪ0�Ĳ�Ҫ
		sum+=dp[l][i];
		sum%=mod;
	}
	cout<<sum<<endl;
	return 0;
}
