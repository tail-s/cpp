//switch���� ���� �ǽ�-2(������ �߿伺)
//������ ������ ���, ������ ����ۿ� �� ���� ����.

//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//
//	int score = 0;
//	char grade = ' ';
//
//	//�ȳ� ��Ʈ
//	cout << "A���� : 90 �̻� ~ 100�� ����" << endl;
//	cout << "B���� : 80 �̻� ~ 90�� �̸�" << endl;
//	cout << "C���� : 70 �̻� ~ 80�� �̸�" << endl;
//	cout << "D���� : 60 �̻� ~ 70�� �̸�" << endl;
//	cout << "F���� : 0 �̻� ~ 60�� �̸�" << endl << endl;
//
//	cout << "���� ������ �Է����ּ��� : ";
//	cin >> score;
//
//	//���� ó��
//	if (cin.fail()) {
//		cout << "�Է��Ͻ� ���� 0~100���� ���� �ƴմϴ�." << endl;
//		cout << "���α׷��� �����մϴ�." << endl;
//		return 0;
//	}
//	//������ �� �����ؾ� �ϴ� ������ �Ʒ��� ���� ���̴�.
//	//score���� �ϳ��� �ִ� ���ǰ� score/10�� ������ �ִ� ���ǰ��� �������� �ݵ��
//	//���ظ� �� �� �ֵ��� �ؾ��Ѵ�.
//	switch (score/10){   //������ / ������ = ������
//		case 10 :
//		case 9 :
//			grade = 'A';
//			break;
//		case 8 :
//			grade = 'B';
//			break;
//		case 7 :
//			grade = 'C';
//			break;
//		case 6 :
//			grade = 'D';
//			break;
//		default:
//			grade = 'F';
//			break;
//	}
//	cout << "����� ���� : " << score << "�Դϴ�." << endl;
//	cout << "����� ���� : " << grade << "�Դϴ�." << endl;
//	return 0;
//}