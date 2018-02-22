#include <iostream>
using namespace std;

int b[9];//白皇后放置位置，x行y列：b[x]=y
int h[9];//黑皇后放置位置，x行y列：h[x]=y
int cb[9][9]; //棋盘
int cnt=0; //方案数量

int check(int q[],int n){//判断同一列或者两对角线是否放置
	for(int i=1;i<n;i++){
		int t=q[i]-q[n];
		if(t==0 || t==n-i || t==i-n) return 0;
	}
	return 1;
}
void bai(int row,int n){//白皇后的搜索
	if(row==n+1) cnt++;
	else{
		for(int i=1;i<=n;i++){
			if(cb[row][i]==1 && h[row]!=i){//该位置可以放置且未放置黑皇后
				b[row]=i;
				if(check(b,row)) bai(row+1,n);
			}
		}
	}
}

void hei(int row,int n){//黑皇后的搜索
	if(row==n+1) bai(1,n); //黑皇后搜索完毕，开始搜索白皇后
	else{
		for(int i=1;i<=n;i++){//搜索列
			if(cb[row][i]==1){//该位置可以放置
				h[row]=i;
				if(check(h,row)) hei(row+1,n);
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>cb[i][j];
		}
	}
	hei(1,n);
	cout<<cnt<<endl;
	return 0;
}
