                                                                 //例：    变量       内存地址       内容  
														         //         int x       0x1000       0x4
															     //         int* px     0x1004       0x1000
																 //         int y       0x1008       0x4
#include<iostream> 
using namespace std;
void f(int x) {                         //void函数，没有返回值
	if (x < 0) {
		return;
	}
	cout << x << endl;
}
int main() {
	int z{ 5 };              //大括号初始化，避免窄化转换，当初始化完成，便自动构建起了数据，内存，地址
	int x = 4;		         //类型（四个字节） 变量名 赋值 名为x的整数被赋值为4
	int*(px) = &x;			 //int指针px被赋值为x的地址  *放右边为改变类型   &与号取指向谁的地址  可通过引用访问x 数据类型,括号加不加无所谓
	int y = *px;             //*放在左侧时，被称为解引用，其作用为获取指针所指向的地址中储存的值
	cout << x << "  " << px << "   " << y << endl;  //内存会被动态分配，故每次运行内存不同
	f(6);
	return 0;
}