#include <iostream>
#include <string>
using namespace std;
int main(){
	int l,cnt,max=0;
	string s,t,ans;
	cin>>l>>s;
	for(int k=l;k<=s.length();k++){
		for(int i=s.length()-k;i>=0;i--){
			t=s.substr(i,k);
			cnt=0;
			for(int j=i-1;j>=0;j--){
				if(s.substr(j,k)==t){
					cnt++;
				}
			}
			if(cnt>=max){
				max=cnt;
				ans=t;
			} 
		}
	}
	cout<<ans<<endl;
	return 0;
}
