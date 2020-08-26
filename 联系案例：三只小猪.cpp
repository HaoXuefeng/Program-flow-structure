
# include <iostream>
using namespace std;

		//		三只小猪A，B，C，用户输入体重，判断谁最重

int main() {
	int A, B, C;
	cout << "输入小猪A的体重" << endl;
	cin >> A;
	cout << "输入小猪B的体重" << endl;
	cin >> B;
	cout << "输入小猪C的体重" << endl;
	cin >> C;
	if (A > B) {
		if (A > C) {
			cout << "小猪A最重！" << endl;
		}
		else {
			cout << "小猪C最重！" << endl;
		}
	}
	else {
		if (B > C) {
			cout << "小猪B最重！" << endl;
		}
		else {
			cout << "小猪C最重！" << endl;
		}
	}

	system("pause");
	return 0;
}
