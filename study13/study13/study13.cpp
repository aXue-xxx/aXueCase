#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main() {
	srand(time(0));
	int t = rand()%10;
	int a = -1;
	while(a!=t){
		cout << "请猜一个个位数字：" << endl;
		cin >> a;
	}
	cout << "恭喜你猜对了！！！" << endl;
	return 0;
}