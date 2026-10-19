#include<iostream>
#include<string>
using namespace std;
struct student {        //struct是关键词，student是结构体类型名，算一种定义
	string name;        //成员变量
	int score;
};
int main() {
	student arr[5];
	cout << "请输入五名同学的姓名和分数：" << endl;
	for (int i = 0;i < 5;i++) {
		student s;      //定义一个专门用来赋值的变量s，来给数组中的每个学生赋值
		cin >> s.name >> s.score;
		arr[i] = s;     //给数组赋予相应的元素
	}
	cout << endl;
	cout << "打印出五名同学的姓名和成绩：" << endl;
	for (int i = 0;i < 5;i++) {
		cout << arr[i].name << "  " << arr[i].score << endl;	
	}
	cout << endl;
	for (int i = 0;i < 5;i++) {                 //冒泡循环来给成绩排序
		int time = 0;
		for (int j = 0;j < 4-i;j++) {
			if (arr[j].score > arr[j + 1].score) {
				student temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				time = 1;
			}

		}if (time == 1) {
			break;
		}
	}
	cout << "已完成对成绩的排序:" << endl;
	for (int i = 0;i < 5;i++) {
		cout << arr[i].name << "  " << arr[i].score << endl;
	}
	return 0;
}
