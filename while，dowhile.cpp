
# include <iostream>
using namespace std;

		//	while(循环条件)	(循环语句)
		//	只要循环条件是真（不是0），就一直执行循环语句
/*
int main() {
	//	打印0~9
	int num = 0;
	while (num < 10)
	{
		cout << num++ << endl;
	}
	system("pause");
	return 0;
}
*/

		//	do {循环语句} while(循环条件)
//	do...while循环语句和while循环语句的区别：do..while会在判断之前先执行一遍循环语句，while在判断条件符合之后才会执行

int main()
{
	int num = 0;
	do {
		cout << num++ << endl;
	} while (num < 10);		//	注意这里后面要加上	；	分号

	system("pause");
	return 0;
}
