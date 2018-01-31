#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int n,cnt=1;
	cin>>n;
	int ans=1;
	for(int i=2;cnt<=n;i++){
		if(isPrime(i)){
			ans=ans*i%50000;
			cnt++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
