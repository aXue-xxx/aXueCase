#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	int arr[10] = { 0 };
	srand(time(0));                       //种子绝对不能写在循环内部，否则每一次都在更新起点，随机数就是一样的
	for (int i = 0;i < 1000;i++) {         //两个循环可以用一个i，但是内外层的不行
		int a = rand()%10;
		cout << a << "  ";
		arr[a] = arr[a] + 1;
	}
	cout << endl;
	for (int j = 0;j < 10;j++) {
		cout << j << "   " << arr[j] << endl;
	}
	int max = arr[0];
	for (int i = 1;i < 10;i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << endl;
	cout << "故最大数字是：" << endl;
	cout << max << endl;
	return 0;
}