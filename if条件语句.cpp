//	C/C++ 支持最基本的三种程序运行结构：1、顺序结构，2、选择结构，3、循环结构
//			1、顺序结构：程序按顺序执行，不发生逆转
//			2、选择结构：依据条件是否满足，有选择地执行相应的功能
//			3、循环结构：依据条件是否满足，循环多次执行某段代码


//	if条件语句：执行满足条件的语句

# include <iostream>
using namespace std;

/*
int main() {
		//	单行if语句
	//	用户输入一个分数，如果分数大于600，视为考上一本大学，恭喜
	int score = 0;
	cout << "输入你的分数:" << endl;
	cin >> score;
	cout << "分数为：" << score << endl;
	if (score > 600)		//	if条件后面不要加分号，否则		无视条件直接执行	！！
	{
		cout << "恭喜考上一本！" << endl;
	}

	system("pause");
	return 0;
}
*/

/*
int main()
{
		//	多行if语句
	//	如果为真，执行一段代码，否则，执行另一段代码；if ... else...
	//	用户输入一个分数，如果分数大于600，视为考上一本大学，恭喜，否则，加油
	int score = 0;
	cout << "输入你的分数:" << endl;
	cin >> score;
	cout << "分数为：" << score << endl;
	if (score > 600)		//	if条件后面不要加分号，否则		无视条件直接执行	！！
	{
		cout << "恭喜考上一本！" << endl;
	}
	else
	{
		cout << "未考上一本，加油！" << endl;
	}


	system("pause");
	return 0;
}
*/

/*
int main()
{
		//	多条件if语句
	//	if里面多个条件满足，才执行		if...	else if...	else if... else ...;
	//	用户输入一个分数，如果分数大于600，视为考上一本大学，大于500，考上二本，大于400，考上三本，否则，未考上本科
	int score = 0;
	cout << "输入你的分数:" << endl;
	cin >> score;
	cout << "分数为：" << score << endl;
	if (score > 600)		//	if条件后面不要加分号，否则		无视条件直接执行	！！
	{
		cout << "恭喜考上一本！" << endl;
	}
	else if (score > 500)
	{
		cout << "考上二本！" << endl;
	}
	else if (score > 400) {
		cout << "考上三本" << endl;
	}
	else {
		cout << "未考上本科，加油吧！" << endl;
	}

	system("pause");
	return 0;
}
*/

/*
int main()
{
		//	嵌套if语句
	//	用户输入一个分数，如果分数大于600，视为考上一本大学，大于500，考上二本，大于400，考上三本，否则，未考上本科
	// 如果分数大于700，考入北大，大于650，考上清华……
	int score = 0;
	cout << "输入你的分数:" << endl;
	cin >> score;
	cout << "分数为：" << score << endl;
	if (score > 600)		//	if条件后面不要加分号，否则		无视条件直接执行	！！
	{
		cout << "恭喜考上一本！" << endl;
		if (score > 700){
			cout << "恭喜您能考上北大！" << endl;
		}
		else if (score > 650) {
			cout << "恭喜您能考上清华！" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "考上二本！" << endl;
	}
	else if (score > 400) {
		cout << "考上三本" << endl;
	}
	else {
		cout << "未考上本科，加油吧！" << endl;
	}


	system("pause");
	return 0;
}
*/