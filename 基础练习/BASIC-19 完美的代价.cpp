#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,ans=0,flag=0;
	string s;
	cin>>n>>s;
	int len=n-1;
	for(int i=0;i<len;i++){
		for(int j=len;j>=i;j--){
			if(j==i){
				if(n%2==0 || flag==1){
					cout<<"Impossible";
					return 0;
				}
				flag=1;
				ans+=n/2-i;
			}
			else if(s[i]==s[j]){
				for(int k=j;k<len;k++){
					swap(s[k],s[k+1]);
					ans++;
				}
				len--;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
