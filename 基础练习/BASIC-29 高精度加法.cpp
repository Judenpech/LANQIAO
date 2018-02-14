#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int maxn=105;
char sa[maxn],sb[maxn];
int a[maxn]={0},b[maxn]={0},c[maxn]={0};
int main(){
	scanf("%s%s",sa,sb);
	int lena=strlen(sa);
	int lenb=strlen(sb);
	for(int i=lena-1,j=0;i>=0;i--,j++){
		a[j]=sa[i]-48;
	}
	for(int i=lenb-1,j=0;i>=0;i--,j++){
		b[j]=sb[i]-48;
	}
	int t=0,max;
	for(int i=0;i<100;i++){
		c[i]=a[i]+b[i]+t;
		t=c[i]/10;
		c[i]=c[i]%10;
	}
	max=lena>lenb?lena:lenb;
	max=c[max]==0?max-1:max;
	for(int i=max;i>=0;i--){
		cout<<c[i];
	}
	return 0;
}

