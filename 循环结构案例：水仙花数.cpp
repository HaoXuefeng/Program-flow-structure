
# include <iostream>
using namespace std;

			//		水仙花数是指一个3位数，它的每个位上的数字的3次幂之和等于它本身
			//		例如：1^3 + 5^3 + 3^3 = 153,		153就是一个水仙花数
			//		请利用	do...while	语句，求出所有3位数中的水仙花数

int main() {
	int num = 100;
	int a = 0;
	int b = 0;
	int c = 0;

	do {
		c = num % 10;			//	获取个位：取模于10
		b = (num / 10) % 10;	//	获取十位：整除于10得到百位和十位（个位是小数，整除舍去），再取模于10得到十位
		a = (num / 100);		//	获取百位：直接整除于100，个位和十位舍去，得到百位

		if (num == pow(a, 3) + pow(b, 3) + pow(c, 3)) {
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}
