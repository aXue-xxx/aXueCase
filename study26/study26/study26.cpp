#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int a = 0, b = 0, c = 0, d = 0;
	for (int i = 0;i < s.size();i++) {                  //注意同一个i只有一种可能,要想四类互斥必须加上
		if (s[i] >= 'A' && s[i] <= 'Z')a++;             //多个if分支依次判断，无论正确与否，而if else if则是只要成立了，剩下分支直接跳过
		else if (s[i] >= 'a' && s[i] <= 'z')b++;
		else if (s[i] >= '0' && s[i] <= '9')c++;
		else d++;
	}
	cout << a << "  " << b << "  " << c << "  " << d << "  ";
	printf("%.2f", (a + b + c) / d);                     //%.2f代表保留小数点后两位有效数字
	return 0;
}