#include<iostream>//引入头文件，头文件是说明书，告诉编译器如何使用函数等；<是系统的，“是自己弄的
#include<iomanip>
#include<cmath>
#include<cstdlib>
using namespace std;//把std（标准命名空间）的符号引入块（局部）作用域；其作用是为了区分我定义的变量等，以免重名
int main()
{               //大括号内为块作用域
	int a = 3;
	float b = 2.5;  //精度很大，不用担心
	double c = 2.55;
	b = b + 1.2;
	a = a + 5;
	c = c * c;
	double d = (a + b + c) *10/ 17;        //定义新变量要标明数据类型
	cout << d << endl;                     //cout是输出流，将程序输出到屏幕；<<是插入运算符，把数据插入流
	cout << fixed << setprecision(3) << d << endl;       //fixed是粘性标志，固定小数点；不加fixed，setprecision是总的有效位数，加之后则是小数点后位数
	cout << setprecision(3) << fixed << d << endl;       //顺序没有关系，结果都是一样的
	cout << defaultfloat<< setprecision(3) << d<<endl;   //defaultfloat消除小数点固定
	//如果round放在setprecision后面也会先运行；fixed属于iostream；set属于iomanip
	cout << round(d)<<endl;         //对d四舍五入（属于cmath）
	system("pause");				//windows专用，暂停控制台窗口
	return 0;
}
