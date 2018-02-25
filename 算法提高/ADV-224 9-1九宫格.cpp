#include <iostream>
using namespace std;
int main(){
	int a[5][5];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	int row[3]={0},col[3]={0},diagonal[2]={0};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			row[i]+=a[i][j];
			col[i]+=a[j][i];
			if(i==j){
				diagonal[0]+=a[i][j];
			}
		}
	}
	diagonal[1]=a[0][2]+a[1][1]+a[2][0];
	for(int i=0;i<3;i++){
		//if(row[i]!=)
	}
	return 0;
}
