#include <iostream>
using namespace std;
int main(){
	long long n,ans;
	cin>>n;
	if(n<=2) ans=n;
	else{
		if(n%2==0){
			if(n%3==0){
				ans=(n-1)*(n-2)*(n-3);
			}else{
				ans=n*(n-1)*(n-3);
			}
		}else{
			ans=n*(n-1)*(n-2);
		}
	}
	cout<<ans<<endl;
	return 0;
}
