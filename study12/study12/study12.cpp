#include<iostream>
#include<ctime>           //时间函数头文件
#include<cstdlib>		  //随机数等
using namespace std;
int main() {
	int t = time(0);      //从1970年开始到现在的秒数 其具体用法有点复杂，后面再学
	cout << t << endl;
	srand(t);                 //设置种子一次就够，不能进入循环
	int a = rand();          //生成随机数（非真随机，通过种子，即起点往后固定顺序拿数字，rand库里面内置了固定好的数列）
	cout << a << endl;       //想要生成真随机数，要让种子变化，通过时间函数
	return 0;
}