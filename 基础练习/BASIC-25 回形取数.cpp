#include <iostream>
using namespace std;
const int maxn=200;
int a[maxn][maxn];
int main(){
    int m,n,x=0,y=0;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=m,j=0,p=1;p<=m*n;i--,j++,x++,y++){
        while(x<i && p<=m*n){
            cout<<a[x++][y];
            if(p++<m*n) cout<<" ";
        }
        x--;y++;
        while(y<n-j && p<=m*n){
            cout<<a[x][y++];
            if(p++<m*n) cout<<" ";
        }
        x--;y--;
        while(x>=j && p<=m*n){
            cout<<a[x--][y];
            if(p++<m*n) cout<<" ";
        }
        x++;y--;
        while(y>j && p<=m*n){
            cout<<a[x][y--];
            if(p++<m*n) cout<<" ";
        }
    }
    return 0;
}
