#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin>>s;
	int flag;
	for(int i=1;i<=s.length();i++){
		flag=1;
		string a=s.substr(0,i);
		for(int j=i;j<s.length();j+=i){
			string b=s.substr(j,i);
			if(a!=b){
				flag=0;
				break;
			} 
		}
		if(flag){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
