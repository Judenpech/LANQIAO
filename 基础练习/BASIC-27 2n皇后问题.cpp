#include <iostream>
using namespace std;

int b[9];//�׻ʺ����λ�ã�x��y�У�b[x]=y
int h[9];//�ڻʺ����λ�ã�x��y�У�h[x]=y
int cb[9][9]; //����
int cnt=0; //��������

int check(int q[],int n){//�ж�ͬһ�л������Խ����Ƿ����
	for(int i=1;i<n;i++){
		int t=q[i]-q[n];
		if(t==0 || t==n-i || t==i-n) return 0;
	}
	return 1;
}
void bai(int row,int n){//�׻ʺ������
	if(row==n+1) cnt++;
	else{
		for(int i=1;i<=n;i++){
			if(cb[row][i]==1 && h[row]!=i){//��λ�ÿ��Է�����δ���úڻʺ�
				b[row]=i;
				if(check(b,row)) bai(row+1,n);
			}
		}
	}
}

void hei(int row,int n){//�ڻʺ������
	if(row==n+1) bai(1,n); //�ڻʺ�������ϣ���ʼ�����׻ʺ�
	else{
		for(int i=1;i<=n;i++){//������
			if(cb[row][i]==1){//��λ�ÿ��Է���
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
