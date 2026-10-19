#include<iostream>
using namespace std;
int main() {
	int n = 0;
	int m;
	cout << "输入一个任意自然数" << endl;
	cin >> m;
	while (m != 0) {
		int t = m % 10;
		n = n * 10 + t;
		m = m / 10;
	}
	cout << n << endl;
	cout << "完成将该数的倒置！！" << endl;
	return 0;
}