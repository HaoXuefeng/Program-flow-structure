
# include <iostream>
using namespace std;

		//	while(ѭ������)	(ѭ�����)
		//	ֻҪѭ���������棨����0������һֱִ��ѭ�����
/*
int main() {
	//	��ӡ0~9
	int num = 0;
	while (num < 10)
	{
		cout << num++ << endl;
	}
	system("pause");
	return 0;
}
*/

		//	do {ѭ�����} while(ѭ������)
//	do...whileѭ������whileѭ����������do..while�����ж�֮ǰ��ִ��һ��ѭ����䣬while���ж���������֮��Ż�ִ��

int main()
{
	int num = 0;
	do {
		cout << num++ << endl;
	} while (num < 10);		//	ע���������Ҫ����	��	�ֺ�

	system("pause");
	return 0;
}
