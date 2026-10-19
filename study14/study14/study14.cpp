#include<iostream>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	char a, b;
	cin >> a >> b;
	for (int i = 1;i <= m;i++) {                    //第一行
		cout << a << " ";
	}
	cout << endl;
	for (int i = 1;i <= n - 2;i++) {                //先完成内部小循环，再完成外部大循环，小循环是一行，大循环是列
		for (int j = 1;j <= m;j++) {
			if (j == 1 || j == m) {
				cout << a << " ";
			}
			else {
				cout << b << " ";
			}
		}
		cout << endl;
	}
	for (int i = 1;i <= m;i++) {                    //最后一行
		cout << a << " ";
	}
	return 0;
}