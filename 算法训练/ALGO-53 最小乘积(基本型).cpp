#include <iostream>
#include <algorithm>
#define maxn 1005
using namespace std;
int a[maxn],b[maxn];
int main(){
	int t,n,sum;
	cin>>t;
	while(t--){
		cin>>n;
		sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		for(int i=0;i<n;i++){
			sum+=a[i]*b[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
