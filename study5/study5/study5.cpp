#include<iostream>
using namespace std;
int main() {                 //小细节，return 0 在main函数中会被偷偷补上，而其他main函数不行
	int a = 0;
	while (0) {              //0为恒假，1为恒真
		cout << a << "  ";
		a++;
	}
	int b = 0;
	do {                     //do while循环先执行后判断条件，与while的逻辑不同
		cout << b << "  ";   //先do；再判断do的计算条件（计算结果）的真假；若真则跳回do，若假则跳出循环往下走
		b++;
	} while (b<5);
	return 0;
}