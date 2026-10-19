#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0;i < n;i++) {
		cout << "请输入第" << i + 1 << "个数字：" << endl;
		cin >> arr[i];
	}
	for (int i = 0;i < n;i++) {
		cout << arr[i] << endl;
	}
	vector<int> num1;//定义了一个名为num1，存int数据的一维数组
	vector<int> num2(n);//定义一个容量为n的动态数组，n可赋值可输入
	vector<int> num3(10, 1);//定义一个容量为10，每个元素为1的动态数组
	vector<int> num4{ 1,2,3,4,5 };//数组中有五个元素
	vector<int> num5(num4);//把num4中所有元素复制到他中间来


	vector<vector<int>> num6; //定义了一个二维数组
	vector<vector<int>> num7(10, vector<int>(10, 8));

	num3.push_back(9);       //在数组后面加一个9元素
	num6[0].push_back(9);     //在二维数组num6的编号为0的数组后面加一个元素9

	return 0;
}












