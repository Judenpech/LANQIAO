#include <iostream>
using namespace std;

const int inf=1000000000;
int main(){
	int t,max=-inf,sec=-inf+1;
	while(cin>>t && t!=0){
		if(t>max){
			sec=max;
			max=t;
		}else if(t>sec){
			sec=t;
		}
	}
	cout<<sec<<endl;
	return 0;
}
