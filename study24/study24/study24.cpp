#include<iostream>
using namespace std;
int main() {                                  //选择排序标准写法
	int arr[6] = { 2,5,6,7,3,4 };        
	for (int i = 0;i < 5;i++) {
		int min = i;                          //直接暴力先定义下标
		for (int j = i + 1;j < 6;j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		int t = arr[i];
		arr[i] = arr[min];
		arr[min] = t;
	}
	for (int i = 0;i < 6;i++) {
		cout << arr[i] << "   ";
	}
	return 0;
}