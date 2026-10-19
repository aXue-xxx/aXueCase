#include<iostream>;
using namespace std;
int main() {                      //数组中括号内代表容量，存放的数字个数小于等于该容量，不写的话系统会自己默认
	int arr[3] = { 10,20,30 };    //创建数组，arr为名字，写什么都可以，int代表数组里只能有整数，【】代表数组
	cout << arr << endl;          //直接输出，输出内容为其地址
	cout << arr[0] << endl;       //从零开始对应数组内的数
	for (int i = 0;i < 3;i++) {
		cout << arr[i] << endl;   //遍历数组，把数组中的数全部输出一遍
	}
	arr[1] = 200;                 //可以对数组内数重新赋值
	cout << arr[1] << endl;
	return 0;
}