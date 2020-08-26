
# include <iostream>
using namespace std;
					//	break：跳出选择结构(switch)，或跳出当前所在的一层循环，停止当前的这一层循环
					//	continue：跳转到下一次循环，停直当前这次的循环，开始当前层的下一次循环
			//	goto：直接跳到指定的位置，无视多层的循环限制。	慎用！！
			//	goto标记：如果有标记名称的存在执行到goto语句时，会跳转到标记的位置

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
