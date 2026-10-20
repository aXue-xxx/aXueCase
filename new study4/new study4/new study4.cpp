#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);                  //没输入元素的数组，默认元素为0
	for (int &x : arr) {                 //如果是输入，不能用值拷贝，要用引用来修改数组内的值
		cin >> x;//x是元素的别名
	}
	for (int x : arr) {                  //range for 写法，值拷贝，将arr数组内的值拷贝至x，不修改arr内的值，占用内存
		cout << x << "  ";//x是新造的，与内部元素无关
	}
	cout << endl;
	for (const int& x : arr) {           //const引用，只读，不拷贝，省内存
		cout << x << "  ";
	}
	cout << endl;
	//下面是algorithm内的我现阶段可常用工具，不代表所有
	sort(arr.begin(), arr.end());        //升序排序，从小到大，注意，这种排序并不是拷贝之类的，而是直接将数组内部数据排序
	for (const int& x : arr) {
		cout << x << "  ";
	}
	cout << endl;
	sort(arr.begin(), arr.end(),greater<int>());        //降序排序，从大到小
	for (const int& x : arr) {
		cout << x << "  ";
	}
	cout << endl;
	reverse(arr.begin(), arr.end());      //反转，将本来的顺序倒过来
	for (const int& x : arr) {
		cout << x << "  ";
	}
	cout << endl;                         //目前就这么多，再多的我搞不懂
	return 0;
}
