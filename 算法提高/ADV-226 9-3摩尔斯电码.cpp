#include <iostream>
#include <string>
using namespace std;//****|*|*-**|*-**|---

string a[]={"*-","-***","-*-*","-**",
	"*","**-*","--*","****",
	"**","*---","-*-","*-**",
	"--","-*","---","*--*",
	"--*-","*-*","***","-",
	"**-","***-","*--","-**-",
	"-*--","--**"};
int main(){
	string s,t="";
	getline(cin,s);
	for(int i=0;i<=s.length();i++){
		if(s[i]!='|' && i!=s.length()){
			t+=s[i];
			continue;
		}
		for(int j=0;j<26;j++){
			if(t==a[j]){
				cout<<(char)(j+'a');
				break;
			}
		}
		t="";
	}
	return 0;
}
