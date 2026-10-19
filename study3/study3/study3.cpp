#include<iostream>
using namespace std;
int main() {
	cout << (1 && 1) << endl;  //打括号表示优先级，正常情况下<<优先级高于&&，同时告诉编译器这是一整个值
	cout << (0 && 1) << endl;  //类比串联电路，两个开关全开才能通路，||或同理表示并联电路
	cout << (1 && 0) << endl;  
	cout << (0 && 0) << endl;
	//三目运算符 (a)? (b):(c) 翻译a如果成立则输出b，否则则输出c
	int a, b;//不能写int a,int b
	cin >> a >> b;
	cout << ((a > b) ? (a) : (b)) << endl;
	return 0;
}
