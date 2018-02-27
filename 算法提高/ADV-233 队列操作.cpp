#include <iostream>
#include <queue>
using namespace std;
int main(){
	int n,op,t;
	cin>>n;
	queue<int> q;
	while(n--){
		cin>>op;
		if(op==1){
			cin>>t;
			q.push(t);
		}else if(op==2){
			if(q.empty()){
				cout<<"no"<<endl;
				return 0;
			}else{
				cout<<q.front()<<endl;
				q.pop();
			}
		}else if(op==3){
			cout<<q.size()<<endl;;
		}
	}
	return 0;
}
