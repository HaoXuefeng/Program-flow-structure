
# include <iostream>
using namespace std;

					//	敲桌子：从1开始数到100，如果这个数字包含7，或者是7的倍数，打印敲桌子，其他数字直接打印

int main() {

	for (int i = 1; i < 101; i++) {
		int a = 0;	//获取个位
		int b = 0;	//获取十位
		a = i % 10;
		b = i / 10;
		if (a == 7 || b == 7 || i % 7 == 0) {
			cout << "敲桌子！" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}
