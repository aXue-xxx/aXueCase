#include <iostream>
using namespace std;
int main() {
	for (int i = 1000;i < 10000;i++) {
		int n = i % 10, m = i / 1000,t=(i/10)%10,r=(i/100)%10;
		if (m == n&&t == r) {
			cout << i <<endl;
		}
	}
	return 0;
}
