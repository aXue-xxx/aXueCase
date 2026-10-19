#include<iostream>
using namespace std;        
int main() {                  //指针的特性，指针可以为空 
	int* (p) = nullptr;
	int a = 5, b = 7;
	p = &a;                   //可以随时更换绑定的地址
	cout << p << endl;
	p = &b;
	cout << p << endl;
	p = nullptr;              //指针不绑定时，要声明为空
	//悬空引用（UB）未定义行为，随时可能崩溃
	//1.解引用空指针
	//2.解引用已经被释放的地址
	return 0;          
}
void print(int* (p)) {         //该函数可防止解引用空指针时崩溃
	if (p == nullptr) {    
		cout << "The pointer is a nullptr!" << endl;
		return;
	}
	cout << *p << endl;        //解引用哦
}