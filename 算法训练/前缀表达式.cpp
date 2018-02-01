#include <iostream>
using namespace std;
int main(){
	char o;
	int a,b,ans;
	cin>>o>>a>>b;
	switch(o){
		case '+':
			ans=a+b;
			break;
		case '-':
			ans=a-b;
			break;
		case '*':
			ans=a*b;
			break;
		case '/':
			ans=a/b;
			break;
	}
	cout<<ans<<endl;
	return 0;
}
