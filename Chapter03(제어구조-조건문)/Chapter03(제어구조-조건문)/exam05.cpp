//중첩(nested) if문을 실습
//학점 처리
//A+, A-, B+, B- .... 으로 표식

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void) {
//
//	int score = 0;
//	string grade = "";
//
//	cout << "당신의 과목 점수를 입력하세요 : ";
//	cin >> score;
//
//	//fail()은 cin객체의 메소드로써 선언한 타입과 일치하지 아니하면 true를 리턴한다.
//	if (cin.fail()) {
//		cout << "입력하신 값은 0~100사의 값이 아닙니다." << endl;
//		cout << "프로그램을 종료합니다." << endl;
//		return 0;
//	}
//
//	//중첩 if문을 사용하여 학점을 선정하는 코드
//	if (score >= 90 && score <= 100) {	//외부 조건문(큰 조건문)
//		//중첩if문(무제한적으로 들어갈 수가 있다.하지만 웬만하면 2개 정도만 사용하도록 하자)
//		if (score >= 95) {  //95~100, 내부 조건문(작은 조건문)
//			grade = "A+";
//		}
//		else {	//90~94
//			grade = "A-";
//		}
//	}
//	else if (score >= 80 && score < 90) {
//		if (score >= 85) {  //85~89, 내부 조건문(작은 조건문)
//			grade = "B+";
//		}
//		else {	//80~84
//			grade = "B-";
//		}
//	}
//	else if (score >= 70 && score < 80) {
//		if (score >= 75) {  //75~79, 내부 조건문(작은 조건문)
//			grade = "C+";
//		}
//		else {	//70~74
//			grade = "C-";
//		}
//	}
//	else if (score >= 60 && score < 70) {
//		if (score >= 65) {  //65~69, 내부 조건문(작은 조건문)
//			grade = "D+";
//		}
//		else {	//60~64
//			grade = "D-";
//		}
//	}
//	else {
//		grade = "F";
//	}
//
//	cout << "입력한 점수는 " << score << "입니다." << endl;
//	cout << "점수의 학점 등급 : " << grade << "입니다." << endl;
//
//	return 0;
//}