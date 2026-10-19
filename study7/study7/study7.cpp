#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	for (int i=0; i<= 40;i++) {  //小知识：i++与++i，前者先用（输出）后加，后者先加后用
		if (i == a) {            //break语句前面的会运行，而后面的不会
			break;
		}
		cout << i << "   ";
	}
	return 0;
}