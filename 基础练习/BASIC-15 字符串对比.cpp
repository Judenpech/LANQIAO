#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;
int main(){
	char s1[15],s2[15];
	cin>>s1>>s2;
	if(strlen(s1)!=strlen(s2)){
		cout<<"1"<<endl;
		return 0;
	}
	else{
		int f1=1,f2=0;
		for(int i=0;i<strlen(s1);i++){
			if(tolower(s1[i])==tolower(s2[i])){
				f2++;
			}
			if(s1[i]!=s2[i]){
				f1=0;
			}
		}
	if(f1){
		cout<<2<<endl;
		return 0;
	} 
	if(f2==strlen(s1)) cout<<3<<endl;
	else cout<<4<<endl;
	}
	return 0;
}
