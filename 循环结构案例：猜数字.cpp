
# include <iostream>
using namespace std;
#include <ctime>

	//	ϵͳ�������һ��1~100֮������֣���Ҳ²⣬����´�����ʾ������ֹ�����С������¶Իṧϲ���ʤ�������˳���Ϸ��

int main() {

	//rand() % 100;		//	�������д��������һ��0~99֮����������
	//	ֵ��һ����ǣ��������ɵ���һ��α�������0~99֮��ĵ�һ��������Զ����41
	
	//	������������	���õ�ǰ��ϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));	//ʹ��ϵͳʱ��Ҫ�õ�ͷ�ļ� #include <ctime>
	int num = rand() % 100 + 1;
	//cout << num << endl;

	int val = 0;
	while (val != num) {
		cout << "���������Ĳ²⣺" << '\t';
		cin >> val;
		if (val > num) {
			cout << "�²����" << endl;
		}
		else if (val < num) {
			cout << "�²��С��" << endl;
		}
		else {
			cout << "��ϲ���¶�����" << endl;
			//break;	//�øùؼ������˳�ѭ������������������Ϊ1�Ļ�
		}
	}

	system("pause");
	return 0;
}
