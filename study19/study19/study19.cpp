#include<iostream>
#include<string>
using namespace std;
struct student {        //struct是关键词，student是结构体类型名，算一种定义
	string name;        //成员变量
	int score;
};
int main() {
	student st1;        //具体细节操作
	st1.name = "张三";
	st1.score = 80;
	cout << st1.name << "  " << st1.score << endl;
	cout << endl;
	return 0;
}
