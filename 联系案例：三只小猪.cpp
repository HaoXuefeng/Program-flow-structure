
# include <iostream>
using namespace std;

		//		��ֻС��A��B��C���û��������أ��ж�˭����

int main() {
	int A, B, C;
	cout << "����С��A������" << endl;
	cin >> A;
	cout << "����С��B������" << endl;
	cin >> B;
	cout << "����С��C������" << endl;
	cin >> C;
	if (A > B) {
		if (A > C) {
			cout << "С��A���أ�" << endl;
		}
		else {
			cout << "С��C���أ�" << endl;
		}
	}
	else {
		if (B > C) {
			cout << "С��B���أ�" << endl;
		}
		else {
			cout << "С��C���أ�" << endl;
		}
	}

	system("pause");
	return 0;
}
