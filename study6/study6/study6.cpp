#include<iostream>
using namespace std;
int main() {
	int a = 0, b = 1;                          //个人原创斐波拉契数列，用while，但while无法固定次数
	while (a<100&&b<100) {
		cout << a << "   " << b << "   ";
		a = a + b;
		b = b + a;
	}
	int m = 0, n = 1;
	cout << m << "   " << n << "   ";
	for (int i = 0;i <= 10;i++) {
		int t = m + n;
		cout << t << "   ";
		m = n;
		n = t;
	}
	int p = 0, q = 1;
	for (int j = 0;j <= 10;j++) {              //注意，虽然第二个和第三个的循环次数是一样的，但是输出的对象不同，导致最后数列项数有二倍的关系
		cout << p << "   " << q << "   ";
		p = p + q;
		q = q + p;
	}
	return 0;
}