/*
�ǽ�-1
���� : ���� �� �ִ� ������ ���α׷����� �����͸� �����ϱ� ���� �޸� ������ �ǹ�
*/

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void) {
//
//	//������ �ۼ�
//	//int 7a = 0;	//�������� ���ڷ� �����ϸ� �ȵȴ�.
//	//int ab cd = 0;	//������ ���̿� ������ ���� �ȵȴ�.
//
//	int age = 28;	//�������� ���� ����
//	int i{ 100 };	//int i = 100;	����ȭ�� �ʱ�ȭ ���
//	short b = 0;
//	bool flag = true;
//	cout << flag << endl;
//	//bool �ڷ����� true�� 1��, false�� 0���� ��µ��� �� �� �ִ�.
//
//	//������ �ּ� Ȯ��
//	//������ �޸� ���ÿ� �񿬼������� �� ������ ã�� ����.
//	//&(���ۻ���) : �ּ� ���� ������
//	cout << "���� age�� �ּ� : " << &age << endl;
//	cout << "���� i�� �ּ� : " << &i << endl;
//	cout << "���� b�� �ּ� : " << &b << endl << endl;
//
//	//�ڷ����� ũ��(sizeof(������ Ÿ�� or ������))
//	//to_string(����) : �������� ���ڿ� Ÿ������ ��������ִ� string ������Ͽ� �����ϴ� �޼ҵ��� ���� ��.
//	cout << "char�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(char)) << endl;
//	cout << "short�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(b)) << endl;
//	cout << "int�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(int)) << endl;
//	cout << "long�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(long)) << endl;
//	cout << "long long�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(long long)) << endl;
//	cout << "float�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(float)) << endl;
//	cout << "double�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(double)) << endl;
//	cout << "long double�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(long double)) << endl;
//	cout << "bool�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(bool)) << endl;
//
//	//string Ÿ��(���ڿ�)
//	string s1 = "�ȳ��ϼ���.";
//	string s2 = "�ݰ����ϴ�.";
//	//���ڿ������� + �����ڷ� ���� ��ų �� �ִ�.
//	string s3 = s1 + " " + s2 + "!!!";
//	string s4 = "�ȳ��ϼ���.";
//	cout << s3 << endl;
//	cout << "���� s1�� �ּ� : " << &s1 << endl;
//	cout << "���� s2�� �ּ� : " << &s2 << endl;
//	cout << "���� s3�� �ּ� : " << &s3 << endl;
//
//	bool equal = s1 == s2;
//	bool eq2 = s1 == s4;
//	cout << "s1 == s2 : " << equal << endl;
//	cout << "s1 == s4 : " << eq2 << endl;
//
//	const double TAX_RATE = 0.25;	//��ȣ ��� ���� �� �ʱ�ȭ
//	//����� �ʱ�ȭ�ϸ� �ٸ� ������ �������� ���Ѵ�.
//	//TAX_RATE = 0.35;
//
//	//������ �ʱ�ȭ�� ��Ģ
//	int garbage;
//	//cout << garbage << endl;
//	//�ʱ�ȭ���� ���� garbage ���� ������ ����߱⿡ ������ ���� �������� �ʴ´�.
//
//	return 0;
//}