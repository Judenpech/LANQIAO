#include <iostream>
using namespace std;

int pw(int x, int y, int p) {
    if (!y) {
        return 1;
    }
//    int res = /*��������д��Ҫ�Ĵ���*/;
    int res = pw(x,y-1,p)+pw(x,y-1,p)*!(y&1);
    if (y & 1) { //�ж���ż����y&1==1Ϊ��������֮Ϊż��
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

