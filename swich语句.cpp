
# include <iostream>
using namespace std;

		/*	swich(���ʽ)
		* {
		*		case ���1 : ִ�����; break;
		*		case ���2 : ִ�����; break;
		*		case ���3 : ִ�����; break;
		*
		*		...
		* 
		*		default : ִ�����; break;
		* }
		*/
int main() {
	//	��һ����Ӱ��֣�10~9�����䣬8~7���ܺã�6~5��һ�㣻5һ�£��𿴣�
	int score = 0;
	cout << "�����Ӱ���" << endl;
	cin >> score;
	cout << "����ķ����ǣ�" << score << endl;
	
	switch(score)	//switch�еı��ʽ ������		����		����		ö�����ͣ���
	{
	case 10:cout << "����Ϊ����һ��ʮ�־���ĵ�Ӱ" << endl; break;	//	Ҫ��break ��������֧������������֧�����Ҳ��ִ��
	case 9:cout << "����Ϊ����һ��ʮ�־���ĵ�Ӱ" << endl; break;
	case 8:cout << "����Ϊ����һ���ܺõĵ�Ӱ" << endl; break;
	case 7:cout << "����Ϊ����һ���ܺõĵ�Ӱ" << endl; break;
	case 6:cout << "����Ϊ����һ��һ��ĵ�Ӱ" << endl; break;
	case 5:cout << "����Ϊ����һ��һ��ĵ�Ӱ" << endl; break;
	default:cout << "����Ϊ����һ����Ƭ" << endl; break;
	}

	system("pause");
	return 0;
}
			//		if �� switch ������
			//	switchȱ�㣺�ж�ֻ���ж����ͻ��ַ��ͣ������ж����䣻
			//	switch�е㣺����ṹʮ��������ִ��Ч�ʸ��ߡ�