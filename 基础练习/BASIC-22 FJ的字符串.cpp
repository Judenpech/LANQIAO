#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s="A";
	for(int i=1;i<n;i++){
		s+=(char)(i+65)+s;
	}
	cout<<s<<endl;;
	return 0;
}
