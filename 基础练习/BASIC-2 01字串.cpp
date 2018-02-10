#include <iostream>
using namespace std;
int main(){
	for(int a=0;a<=1;a++){
		for(int b=0;b<=1;b++){
			for(int c=0;c<=1;c++){
				for(int d=0;d<=1;d++){
					for(int e=0;e<=1;e++){
						printf("%05d\n",a*10000+b*1000+c*100+d*10+e);
					}
				}
			}
		}
	}
	return 0;
}
