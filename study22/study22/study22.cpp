#include<iostream>
using namespace std;
int main() {
	int a[3][4] = { {1,2,3,4},           //二维数组
				   {5,6,7,8},
				   {9,10,11,12} };
	cout << a[0][2] << endl;
	for (int i = 0;i < 4;i++) {          //单行遍历
		cout << a[2][i] << "  ";
	}
	cout << endl;
	//总数组遍历
	for (int i = 0;i < 3;i++) {         //内层一行打完，触发外层循环进入下一行
		for (int j = 0;j < 4;j++) {
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
	int a2[4][3] = { 0 };
	for (int i = 0;i < 4;i++) {         //行列互换，先把每一行的第一个打完1 5 9，再打每一行的第二个2 6 10
		for (int j = 0;j < 3;j++) {
			a2[i][j] = a[j][i];
			cout << a[j][i] << "  ";
		}
		cout << endl;
	}
	for (int i = 0;i < 4;i++) {         //内层一行打完，触发外层循环进入下一行
		for (int j = 0;j < 3;j++) {
			cout << a2[i][j] << "  ";   //虽然看起来打印与上面一样，但已成为一个新的数组，与a不同
		}
		cout << endl;
	}
	
	return 0;
}
