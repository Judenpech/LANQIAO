#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

char EncryptChar(char c){
	if(isalpha(c)){
		if(c=='Z') return 'a';
		else if(c=='z')return 'A';
		else return c+1;
	}
	return c;
}
int main(){
	char s[55],t;
	cin>>s;
	for(int i=0;i<strlen(s);i++){
		t=EncryptChar(s[i]);
		cout<<t;
	}
	return 0;
}
