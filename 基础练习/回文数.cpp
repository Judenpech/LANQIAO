#include <iostream>
using namespace std;
int main(){
	for(int i=1000;i<=9999;i++){
		int a=i/1000;
		int b=i%1000/100;
		int c=i%100/10;
		int d=i%10;
		if(a==d && b==c) cout<<i<<endl;
	}
	return 0;
}
