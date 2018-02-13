#include <iostream>
#include <cstring>
using namespace std;
string n[24]={"zero","one","two","three","four","five","six","seven","eight","nine","ten",
				"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty",
				"thirty","forty","fifty"};
void printTime(int a){
	int t;
	if(a<=20){
		cout<<n[a];
	}else{
		t=a/10+18;
		cout<<n[t]<<" "<<n[a%10];
	}
}
int main(){
	int h,m,t;
	cin>>h>>m;
	if(m==0){
		printTime(h);
		cout<<" o'clock"<<endl;
	}else{
		printTime(h);
		cout<<" ";
		printTime(m);
	}
	return 0;
}
