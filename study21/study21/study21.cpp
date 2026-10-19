#include<iostream>
using namespace std;    
int add(int a, int b) {               //定义函数，调用函数,定义的时候不要具体值
	return a + b;                     //函数的功能，参数，返回值
}

int GetMax(int arr[]) {              //定义求最大值函数
	int Max = arr[0];
	for (int i = 0;i < 5;i++) {
		if (arr[i] > Max) {
			Max = arr[i];
		}
	}
	return Max;
}


int main() {   
	int r = add(10, 20);                     //用r接收
	cout << r << endl;
	cout << add(10, 20)<<endl;                     //不接收直接打印也可以   
	int arr[5] = { 10,60,40,20,50 };               //传入好输入的参数  无论返回值还是参数都要再次标明数据类型
	int goal= GetMax(arr);                         //准备好返回值（注意，括号内的不用arr后面不加中括号，避免将数组与数组的元素弄混）
	cout << goal << endl;                          //输出返回值
	return 0;                                      //代码从上往下，要把定义或声明放前面
}