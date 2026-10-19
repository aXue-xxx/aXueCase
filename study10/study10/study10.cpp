#include<iostream>
#include<string>
using namespace std;
int main() {
	string num;
	cout << "请输入文本" << endl;
	cin >> num;
	for (int i = num.size() - 1;i >= 0;i--) {
		cout << num[i];
	}
	cout << endl << "完成对文本的倒置！！！";
	return 0;
}