#include <iostream>
using namespace std;
int main(){
	int n,max,t,k=0,i=0;
	cin>>n>>max;
	for(int i=1;i<n;i++){
		cin>>t;
		if(t>max){
			max=t;
			k=i;
		} 
	}
	cout<<max<<" "<<k<<endl;
	return 0;
}
