#include <iostream>
#define def 1005
using namespace std;
int main(){
	int arr[def]={0};
	int n,t,a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t;
		if(arr[t]==0) arr[t]=i;
	}
	cin>>a;
	if(arr[a]!=0) cout<<arr[a]<<endl;
	else cout<<-1<<endl;
	return 0;
}
