#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t,tmp,n,m,ans;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int a[20],b[20];
		ans=1;
		for(int i=0,j=0;i+j<n;){
			cin>>tmp;
			if(tmp>=0) a[i++]=tmp;
			else b[j++]=tmp;
		}
		sort(a,);
		sort(b,)
		for(int i=n-1,j=0;j<m;i--,j++){
			ans*=a[i];
		}
		cout<<ans<<endl;cout<<endl;
	}
	return 0;
}
