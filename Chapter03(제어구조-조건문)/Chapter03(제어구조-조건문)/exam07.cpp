//switch문의 대한 실습-2(조건의 중요성)
//조건은 정수형 상수, 문자형 상수밖에 올 수가 없다.

//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//
//	int score = 0;
//	char grade = ' ';
//
//	//안내 멘트
//	cout << "A학점 : 90 이상 ~ 100점 이하" << endl;
//	cout << "B학점 : 80 이상 ~ 90점 미만" << endl;
//	cout << "C학점 : 70 이상 ~ 80점 미만" << endl;
//	cout << "D학점 : 60 이상 ~ 70점 미만" << endl;
//	cout << "F학점 : 0 이상 ~ 60점 미만" << endl << endl;
//
//	cout << "과목 점수를 입력해주세요 : ";
//	cin >> score;
//
//	//예외 처리
//	if (cin.fail()) {
//		cout << "입력하신 값은 0~100사의 값이 아닙니다." << endl;
//		cout << "프로그램을 종료합니다." << endl;
//		return 0;
//	}
//	//조건을 잘 생각해야 하는 이유가 아래와 같은 것이다.
//	//score변수 하나만 있는 조건과 score/10의 수식이 있는 조건과의 차이점을 반드시
//	//이해를 할 수 있도록 해야한다.
//	switch (score/10){   //정수형 / 정수형 = 정수형
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
//	cout << "당신의 점수 : " << score << "입니다." << endl;
//	cout << "당신의 학점 : " << grade << "입니다." << endl;
//	return 0;
//}