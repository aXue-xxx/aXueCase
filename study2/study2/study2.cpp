#include<iostream>
using namespace std;
int main() 
{
	cout << "请输入你的分数，满分100分" << endl;
	int score;
	cin >> score;
	if ( score>=80 ) {
		cout << "你的成绩为优秀" << endl;
	}                                          //if(条件）{结果}
	else if (score<80 && score>=60) {          //不能写60<=score<80,60<=score判断要么是0要么是1，恒成立;要用逻辑“与”&&
		cout << "你的成绩为及格" << endl;      //两个if会并列的顺序执行，只有else if才有条件关系
	}                                          //逻辑运算符 与&& 或|| 非！ 例:!(a>60)等价于(a<=60) 
	else {									   //优先级 ！> 关系运算符（大于小于等于）> && > ||
		cout << "你的成绩为不及格" << endl;
	}
















}