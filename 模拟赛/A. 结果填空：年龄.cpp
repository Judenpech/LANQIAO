#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int cnt=0;
	for(int i=10;i<100;i++){
		int a=i/10+i%10;
		for(int j=10;j<100;j++){
			int b=j/10+j%10;
			if(j/a==2 && j%a==0 && i/b==3 && i%b==0){
				cnt++;
				cout<<i<<" "<<j<<endl;
			} 
		}
	}
	cout<<cnt;
	return 0;
}
