#include<iostream>
using namespace std;
int main() {                            //冒泡排序
	int arr[7] = { 5,7,6,4,3,1,2 };
	int time;
	for (int j = 0;j < 6;j++) {         //循环次数，如果一次循环没有交换，则排序完成，time保持为0，将循环打断
		time = 0;
		for (int i = 0;i < 6-j;i++) {     //遍历比大小,每一次遍历都会把最大值逐个向前放，故可以逐个减少每一次遍历的次数
			if (arr[i] > arr[i + 1]) {
				time = 1;
			int temp = arr[i];            //通过中间变量保留第一个值，如果直接交换，第一个值会消失
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		    }
		}if (time == 0) {
			break;
		}
	}
	for(int i=0;i<7;i++){
		cout << arr[i] << endl;
	}
	return 0;
}