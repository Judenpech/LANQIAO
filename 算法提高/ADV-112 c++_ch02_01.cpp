#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[]={"AEIOU"};
	for(int i=0;i<strlen(a);i++){
		cout<<(int)a[i]<<endl;
	}
	for(int i=0;i<strlen(a);i++){
		cout<<(int)(a[i]+32)<<endl;
	}
	return 0;
}
