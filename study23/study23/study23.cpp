#include<iostream>
#include<vector>                       //vector是动态数组的头文件
using namespace std;
int main() {                           //选择排序
	int min,n,N;                       //定义最小值(按照标准写法，这一步多余了）//定义下标   
	cout << "请输入要排序的数字个数：" << endl;
	cin >> N;
	vector<int> arr(N);                //定义一个动态数组,对数组进行扩容，不需要知道上限
	for (int i=0;i < N;i++) {
		cout << "请输入第" << i + 1 << "个数字：" << endl;
		cin >> arr[i];
	}
	for (int i = 0;i < N;i++)
		cout << arr[i] << "  ";
		cout << endl;
	for(int j=0;j<N-1;j++){
		min = arr[j];
		n = j;                         //n要赋值为j，服务其本身为最小值时，否则若第一个本是最小值的时候，if第一次不运行，n没有值出现错误
		for (int i = j;i < N;i++) {
			if (arr[i] < min) {
				min = arr[i];
				n = i;				   //注意这种存下标的方法
			}
		}
		int t = arr[j];				   //依旧通过中间量换位置
		arr[j] = min;
		arr[n] = t;
	}
	for (int i = 0;i < N;i++) 
	cout << arr[i] << "  ";
	return 0;
}
