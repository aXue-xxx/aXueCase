#include<iostream>
#include<string>           //getline头文件
using namespace std;
int main() {
	int n;
	string s;
	cin >> n;              //cin打完的\n换行符（我用enter换的行），留在缓冲区
	cin.ignore();          //去除留在缓冲区的换行，因为getline看到这个换行符，默认结束了
	getline(cin, s);       //输入缓冲区：键盘输入的临时仓库，输入的字符（包括\n换行）不会直接交给程序，会先被放到内存仓库，cin和getline来拿
	return 0;              //而cin会拿走前面的字符而不会拿走\n，cin还会自动跳过回车，不用担心cin连续
}