#include <iostream>
using namespace std;

int pw(int x, int y, int p) {
    if (!y) {
        return 1;
    }
//    int res = /*在这里填写必要的代码*/;
    int res = pw(x,y-1,p)+pw(x,y-1,p)*!(y&1);
    if (y & 1) { //判断奇偶数，y&1==1为奇数，反之为偶数
        res = res * x % p;
    }
    return res;
}

int main() {
    int x, y, p;
    cin >> x >> y >> p;
    cout << pw(x, y, p) << endl;
    return 0;
}

