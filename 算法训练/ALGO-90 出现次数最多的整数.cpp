#include <iostream>
#define maxn 25
using namespace std;
int main(){
	int n,t,a[maxn],b[maxn]={0};
	cin>>n;
	if(n<=0) return 0;  //注意n<=0的特殊情况
	else{
		cin>>a[0];
		int j=0;
		for(int i=1;i<n;i++){
			cin>>t;
			if(t==a[j]){
				b[j]++;
			}else{
				a[++j]=t;
			}
		}
		t=j;
		for(int i=j-1;i>=0;i--){
			if(b[i]>=b[t]) t=i;
		}
		cout<<a[t]<<endl;
	}
	return 0;
}
