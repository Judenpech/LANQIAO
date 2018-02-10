#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=65;i<65+n;i++){
		int t=m;
		for(int j=i;j>65 && t>0;j--,t--){
			cout<<(char)j;
		}
		for(int j=65;j>=65 && t>0;j++,t--){
			cout<<(char)j;
		}
		cout<<endl;
	}
	return 0;
}
