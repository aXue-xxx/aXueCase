#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<string>    //该编译器内部自己实现，后续要加
using namespace std;//把std（标准命名空间）的符号引入块（局部）作用域；其作用是为了区分我定义的变量等，以免重名
int main()
{               //大括号内为块作用域
	int a = 3;
	float b = 2.5f;  //精度很大，不用担心；告诉编译器这里是float类型4字节，小数只要写出来，默认8字节
	double c = 2.55;
	char e = 'a';
	string f = "my name is god!";            //char是单个字符，而string是字符串
	b = b + 1.2f;
	a = a + 5;
	c = c * c;
	double d = (a + b + c) * 10 / 17;        //定义新变量要标明数据类型
	cout << d << endl;                     //cout是输出流，将程序输出到屏幕；<<是插入运算符，把数据插入流
	cout << fixed << setprecision(3) << d << endl;       //fixed是粘性标志，固定小数点；不加fixed，setprecision是总的有效位数，加之后则是小数点后位数
	cout << setprecision(3) << fixed << d << endl;       //顺序没有关系，结果都是一样的
	cout << defaultfloat << setprecision(3) << d << endl;   //defaultfloat消除小数点固定
	//如果round放在setprecision后面也会先运行；fixed，setprecision属于iomanip
	cout << round(d) << endl;         //对d四舍五入（属于cmath）
	cout << e << endl;
	cout << f << endl;
	cout << e + 1 << endl;          //a的ASCII码为97
	bool m = true;    //bool值只有对和错，用1和0也可以表示
	bool n = false;
	cout << m << endl;
	cout << n << endl;
	system("pause");				//windows专用，暂停控制台窗口
	return 0;                       //返回整数值0，代表程序结束，一个程序中可以有很多return0
}
