/*
* auto Ű���� : �ڵ�������� �ǹ̹ۿ� �������� C++ 11 ���� auto�� �ǹ̰� �ٲ����.
* �ڷ����� ������ �� �����  �� �ִ�.
* �ڵ� Ÿ�� �߷�(automatic type deduction)
*/

//#include <iostream>
//#include <string>
//using namespace std;
//
////�Լ������� �Ű������� auto�� ����� �� ����.
//auto add(int x, int y) {
//	return x + y;	//int + int = int, ���� + ���� = ����(�Ҽ��� ���� ����)
//					//int + double = double, ���� + �Ǽ� = �Ǽ�
//}
//
//int main(void) {
//
//	double d = 1.0;	//double(8����Ʈ) �� Ÿ���� ���� d�� 1.0���� �ʱ�ȭ
//	auto ad = 1;	//�ڵ� Ÿ�� �߷п� �ٰ��Ͽ� ���ԵǴ� ���� ���� �ڷ����� �ٲ�� �ִ�.
//	auto result = add(10, 20);
//
//	cout << "���� d�� ����Ʈ ũ�� : " << sizeof(d) << endl;
//	cout << "���� ad�� ����Ʈ ũ�� : " << sizeof(ad) << endl;
//
//	cout << "�Լ� add()�� ���ϰ� : " << result << "����Ʈ ũ�� : " << sizeof(result) << endl;
//
//	return 0;
//}