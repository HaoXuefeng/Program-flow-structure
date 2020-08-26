
# include <iostream>
using namespace std;
#include <ctime>

	//	系统随机生成一个1~100之间的数字，玩家猜测，如果猜错，会提示玩家数字过大或过小，如果猜对会恭喜玩家胜利，并退出游戏。

int main() {

	//rand() % 100;		//	如果这样写，是生成一个0~99之间的随机数字
	//	值得一提的是，这样生成的是一个伪随机数，0~99之间的第一个数字永远都是41
	
	//	添加随机数种子	利用当前的系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));	//使用系统时间要用到头文件 #include <ctime>
	int num = rand() % 100 + 1;
	//cout << num << endl;

	int val = 0;
	while (val != num) {
		cout << "请输入您的猜测：" << '\t';
		cin >> val;
		if (val > num) {
			cout << "猜测过大！" << endl;
		}
		else if (val < num) {
			cout << "猜测过小！" << endl;
		}
		else {
			cout << "恭喜您猜对啦！" << endl;
			//break;	//用该关键字来退出循环，如果条件语句设置为1的话
		}
	}

	system("pause");
	return 0;
}
