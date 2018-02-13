#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn=105;
char a[maxn],b[maxn],c[maxn];
int main(){
	memset(c,'0',sizeof(c));
	gets(a);
	gets(b);
	int aIsBigger=strlen(a)>strlen(b)?1:0;
	int t,n,p=0;
	if(aIsBigger){
		for(int i=strlen(a)-1,j=strlen(b)-1;j>=0;i--,j--){
			t=a[i]-'0'+(b[j]-'0');
			n=c[p]-'0'+t;
			if(n>=10){
				c[p]=n%10+'0';
				c[++p]='1';
			}else{
				c[p++]=n+'0';
			}
		}
		for(int i=(int)strlen(a)-p-1;p<strlen(a);i--,p++){
			c[p]=a[i];
		}
	}else{
		for(int i=strlen(a)-1,j=strlen(b)-1;i>=0;i--,j--){
			t=a[i]-'0'+(b[j]-'0');
			n=c[p]-'0'+t;
			if(n>=10){
				c[p]=n%10+'0';
				c[++p]='1';
			}else{
				c[p++]=n+'0';
			}
		}
		for(int i=(int)strlen(b)-p-1;p<strlen(b);i--,p++){
			c[p]=b[i];
		}
	}
	for(int i=p-1;i>=0;i--){
		cout<<c[i];
	}
	return 0;
}
