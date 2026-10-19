#include<iostream>
using namespace std;
int a[1005][1005];                //这个数组有点巨大，放栈内存（main的，很小）容易崩溃，放外面当全局变量，在静态储存区，非常巨大
int main() {
	int n,sum=0;
	cin >> n;                     //这里可以用动态数组vector<int> arr[n][n],但没必要
		for (int i = 0;i < n;i++) {
			for (int j = 0;j < n;j++) {
				a[i][j] = i * n + j+1;
			}
	    }
		for (int i = 0;i < n;i++) {
			for (int j = 0;j < n;j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		for (int i = 0;i < n;i++) {                
			for (int j = 0;j < n;j++) {
				if (i == j || (i + j) == n-1)     
					sum += a[i][j];
			}
		}
		//if (n % 2 == 1)                       //这里不用再多此一举减去这个中心了，因为我这个写法两个斜线的终点算成了同一个
		//	sum -= a[n / 2 ][n / 2 ];
		cout << sum << endl;
		return 0;
}