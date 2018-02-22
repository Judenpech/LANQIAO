#include <iostream>
using namespace std;

void an(int n){
	int flag=1;
	for(int i=1;i<=n;i++){
		cout<<"sin("<<i;
		if(i!=n){
			if(flag){
				cout<<"-";
				flag=0;
			}else{
				cout<<"+";
				flag=1;
			}
		} 
		else{
			for(int j=1;j<=n;j++)
				cout<<")";
		} 
	}
}
void sn(int n){
	for(int i=1;i<n;i++)
		cout<<"(";
	for(int i=1,j=n;i<=n;i++,j--){
		an(i);
		cout<<"+"<<j;
		if(j>1) cout<<")";
	}
}
int main(){
	int n;
	cin>>n;
	sn(n);
	cout<<endl;
	return 0;
}
