#include<iostream>
using namespace std;
int main() {
	for (int i = 0;i <= 10;i++) {          //for(初始化，最开始的赋值；循环条件，每次循环先判断，是否符合条件；执行任务）
		cout << i <<endl;                  //注：先执行{}内循环体，再执行3
	}
	int sum = 0;
	for (int j = 1;j <= 100;j++) {
		sum = sum + j;
		cout << sum << "  ";                //此处格式不一样，为空格
	}
		int a = 0;                          //定义循环变量
		while (a < 5) {                     //标明循环条件
			cout << a << endl;              //while循环更自由，a++可在cout上下，但相应的顺序也有变化
			a++;                            //a输出0 1 2 3 4 b输出1 2 3 4 5，与a++的位置有关系
	}
		int b = 0;
		while (b < 5) {
			b++;
			cout << b << endl;
		}
	return 0;
}