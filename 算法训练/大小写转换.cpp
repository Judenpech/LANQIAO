#include <iostream>
#include <cstring>
#define def 25
using namespace std;
int main(){
	char s[def];
	cin>>s;
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='a' && s[i]<='z'){
			s[i]-=32;
		}else{
			s[i]+=32;
		}
		cout<<s[i];
	}
	return 0;
}
