
# include <iostream>
using namespace std;

		/*	swich(表达式)
		* {
		*		case 结果1 : 执行语句; break;
		*		case 结果2 : 执行语句; break;
		*		case 结果3 : 执行语句; break;
		*
		*		...
		* 
		*		default : 执行语句; break;
		* }
		*/
int main() {
	//	给一个电影打分：10~9：经典，8~7：很好；6~5：一般；5一下：别看；
	int score = 0;
	cout << "请给电影打分" << endl;
	cin >> score;
	cout << "您打的分数是：" << score << endl;
	
	switch(score)	//switch中的表达式 必须是		整型		或者		枚举类型！！
	{
	case 10:cout << "您认为这是一部十分经典的电影" << endl; break;	//	要加break 来跳出分支，否则其他分支的语句也会执行
	case 9:cout << "您认为这是一部十分经典的电影" << endl; break;
	case 8:cout << "您认为这是一部很好的电影" << endl; break;
	case 7:cout << "您认为这是一部很好的电影" << endl; break;
	case 6:cout << "您认为这是一部一般的电影" << endl; break;
	case 5:cout << "您认为这是一部一般的电影" << endl; break;
	default:cout << "您认为这是一部烂片" << endl; break;
	}

	system("pause");
	return 0;
}
			//		if 和 switch 的区别？
			//	switch缺点：判断只能判断整型或字符型，不能判断区间；
			//	switch有点：整体结构十分清晰，执行效率更高。