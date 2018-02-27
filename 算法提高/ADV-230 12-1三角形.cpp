#include <iostream>
#include <cmath>
using namespace std;

struct point{
	double x,y;
};
struct triangle{
	point a,b,c; //点
	point wx;//外心
	point zx;//重心
	double l1,l2,l3; //边
};

double dist(point x,point y){ //两点间距离公式：sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))
	double ans=sqrt((x.x-y.x)*(x.x-y.x)+(x.y-y.y)*(x.y-y.y));
	return ans;
}

double zhouChang(triangle tt){ //求周长
	double ans=tt.l1+tt.l2+tt.l3;
	return ans;
}
double mianJi(triangle tt){ //求面积
	double p=(tt.l1+tt.l2+tt.l3)/2.0; //海伦公式
	double s=sqrt(p*(p-tt.l1)*(p-tt.l2)*(p-tt.l3));
	return s;
}
point waiXin(triangle tt){ //求外心
	point ans;
	double a=2*(tt.a.x-tt.b.x);
    double b=2*(tt.a.y-tt.b.y);
    double z=tt.a.x*tt.a.x-tt.b.x*tt.b.x+tt.a.y*tt.a.y-tt.b.y*tt.b.y;
    double a1=2*(tt.c.x-tt.b.x);
    double b1=2*(tt.c.y-tt.b.y);
    double z1=tt.c.x*tt.c.x-tt.b.x*tt.b.x+tt.c.y*tt.c.y-tt.b.y*tt.b.y;
	ans.x=((z*b1)-(z1*b))/((a*b1)-(a1*b));
	ans.y=((a*z1)-(a1*z))/((a*b1)-(a1*b));
	return ans;
}
point zhongXin(triangle tt){ //求重心
	point ans;
	ans.x=(tt.a.x+tt.b.x+tt.c.x)/3.0;
	ans.y=(tt.a.y+tt.b.y+tt.c.y)/3.0;
	return ans;
}

int main(){
	triangle t;
	cin>>t.a.x>>t.a.y;
	cin>>t.b.x>>t.b.y;
	cin>>t.c.x>>t.c.y;
	t.l1=dist(t.a,t.b);
	t.l2=dist(t.b,t.c);
	t.l3=dist(t.c,t.a);
	printf("%.2f\n",zhouChang(t));
	printf("%.2f\n",mianJi(t));
	t.wx=waiXin(t);
	printf("%.2f %.2f\n",t.wx.x,t.wx.y);
	t.zx=zhongXin(t);
	printf("%.2f %.2f\n",t.zx.x,t.zx.y);
	return 0;
}
