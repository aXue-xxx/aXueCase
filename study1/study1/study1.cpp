#include<iostream>
#include<string>
using namespace std;
int main() 
{                             
	/* 关系运算符<  > <=  >=  ==（==是判断二者是否相等，=是赋值）  !=(不等于） */                 //  /*也是注释用的
	int a = 10, b = 20;
	cout << (a < b) << endl;
	cout << (a > b) << endl;
	string name;
	cin >> name; //cin输入语句，>>是提取运算符 注：cin读取到字符串会停止,要读取一整行的后面学，cin本身不换行，控制窗的按下enter有换行作用
	             //有前后顺序之分，只要程序执行到cin就会阻塞等待，要输入内容后才会完成
	cout << name << endl;
	return 0;
}