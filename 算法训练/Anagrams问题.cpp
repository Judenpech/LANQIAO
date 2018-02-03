#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char s1[80],s2[80];
	int a1[26]={0},a2[26]={0},flag=1;
	cin>>s1>>s2; 
	if(strlen(s1)!=strlen(s2)){
		flag=0;
	}else{
		for(int i=0;i<strlen(s1);i++){
			if(s1[i]>='A' && s1[i]<='Z'){
				s1[i]+=32;
			}
			a1[s1[i]-97]++;
			if(s2[i]>='A' && s2[i]<='Z'){
				s2[i]+=32;
			}
			a2[s2[i]-97]++;
		}
		for(int i=0;i<26;i++){
			if(a1[i]!=a2[i]) flag=0;
		}
	}
	if(flag) cout<<"Y"<<endl;
	else cout<<"N"<<endl;
	return 0;
}
