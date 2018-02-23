#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n,t,price=0;
	vector<int> v;
	cin>>n;
	while(n--){
		cin>>t;
		v.push_back(t);
	}
	int size=v.size();
	while(size>=2){
		sort(v.begin(),v.end(),greater<int>());
		t=v[size-2]+v[size-1];
		price+=t;
		v.pop_back();
		v.pop_back();
		v.push_back(t);
		size=v.size();
	}
	cout<<price;
	return 0;
}
