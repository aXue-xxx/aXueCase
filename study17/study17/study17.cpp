#include<iostream>
using namespace std;
int main(){
	int arr[3] = { 10,20,30 };   //数组求和
	int sum = 0;
	for (int i = 0;i < 3;i++) {
		sum += arr[i];   //等价于sum = sum + arr[i]
	}
	cout << sum << endl;

	int srr[5] = { 20,50,100,10,5 };          //数组求最大值
	int max = srr[0];
	for (int i = 1;i < 5;i++) {
		if (srr[i] > max) {
			max = srr[i];
		}
	}
	cout << max << endl;
	return 0;
}