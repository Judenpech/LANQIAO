#include <iostream>
#define maxn 100
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	cout<<sum<<"  "<<sum/n<<endl;
	return 0;
}
