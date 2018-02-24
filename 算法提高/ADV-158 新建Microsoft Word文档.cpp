#include <iostream>
using namespace std;

const int maxn=2015;
int a[maxn]={0};
int main(){
	int n,id;
	string op;
	cin>>n;
	while(n--){
		cin>>op;
		if(op=="New"){
			for(int i=1;i<maxn;i++){
				if(a[i]==0){
					a[i]=1;
					cout<<i<<endl;
					break;
				}
			}
		}else if(op=="Delete"){
			cin>>id;
			if(a[id]==1){
				cout<<"Successful"<<endl;
				a[id]=0;
			}else{
				cout<<"Failed"<<endl;
			}
		}
	}
	return 0;
}
