
# include <iostream>
using namespace std;

					//	�����ӣ���1��ʼ����100�����������ְ���7��������7�ı�������ӡ�����ӣ���������ֱ�Ӵ�ӡ

int main() {

	for (int i = 1; i < 101; i++) {
		int a = 0;	//��ȡ��λ
		int b = 0;	//��ȡʮλ
		a = i % 10;
		b = i / 10;
		if (a == 7 || b == 7 || i % 7 == 0) {
			cout << "�����ӣ�" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}
