
# include <iostream>
using namespace std;
					//	break������ѡ��ṹ(switch)����������ǰ���ڵ�һ��ѭ����ֹͣ��ǰ����һ��ѭ��
					//	continue����ת����һ��ѭ����ֱͣ��ǰ��ε�ѭ������ʼ��ǰ�����һ��ѭ��
			//	goto��ֱ������ָ����λ�ã����Ӷ���ѭ�����ơ�	���ã���
			//	goto��ǣ�����б�����ƵĴ���ִ�е�goto���ʱ������ת����ǵ�λ��

int main() {

	cout << "1" << endl;

	goto FLAG;

	cout << "2" << endl;
	cout << "3" << endl;
	cout << "3" << endl;

FLAG:
	cout << "5 " << endl;

	system("pause");
	return 0;
}
