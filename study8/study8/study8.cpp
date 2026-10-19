#include<iostream>
#include<string>
using namespace std;
int main() {
	string A;
	cout << "请输入一个三位数整数" << endl;
	cin >> A;
	if (A[2] == A[0]) {
		cout << "YES" << endl;
	}
	else { cout << "NO" << endl;
	}
	return 0;
}