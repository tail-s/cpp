//종합 실습 예제-2
//다음 내용에 맞는 프로그램을 작성하시오.
//● 변수 3개를 선언 및 초기화 : int형 변수 2개, string 변수 1개 선언
//● 키보드로 점수 입력받는다.
//● 입력한 점수의 유효범위(0~100)안에 없는 값이 들어오면 예외 처리를 한다.
//● 입력한 점수에 대해 switch문을 사용하여 등급을 출력하라.
//------------------------------------------------------------
/* 등급      점수구간			      비고
//------------------------------------------------------------
 A+ 학점  95점 이상 100점 이하	switch 문으로 A+ 등급 판별
 A0 학점  90점 이상 95점 미만	switch 문으로 A0 등급 판별
 B+ 학점  85점 이상 90점 미만	switch 문으로 B+ 등급 판별
 B0 학점  80점 이상 85점 미만	switch 문으로 B0 등급 판별
 C+ 학점  75점 이상 80점 미만	switch 문으로 C+ 등급 판별
 C0 학점  70점 이상 75점 미만	switch 문으로 C0 등급 판별
 D+ 학점  65점 이상 70점 미만	switch 문으로 D+ 등급 판별
 D0 학점  60점 이상 65점 미만	switch 문으로 D0 등급 판별
 F  학점   0점 이상 60점 미만	switch 문으로 F 등급 판별    */
 //------------------------------------------------------------
 //실행결과-1
 //점수 입력 : 99
 //입력한 점수 : 99
 //점수 등급 : A+ 학점
 //----------------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	//변수 3개를 선언 및 초기화 : int형 변수 2개, string 변수 1개 선언
	int score = 0, div_5 = 0;
	string grade = "";

	cout << "점수를 입력해주세요 : ";
	cin >> score;

	if (cin.fail()) {
		cout << "입력한 점수(0~100) " << score << "는(은) 허용 구간이 아닙니다." << endl;
		cout << "프로그램을 종료합니다." << endl;
		return 0;
	}
	//5로 점수를 나누면 20구간이 생기지만 60점 미만은 전부 F학점이므로 9구간만 case
	//문으로 작성해주면 된다.
	//div_5 = score / 5;

	switch (score / 5) {
	case 20:
	case 19:
		grade = "A+";
		break;
	case 18:
		grade = "A0";
		break;
	case 17:
		grade = "B+";
		break;
	case 16:
		grade = "B0";
		break;
	case 15:
		grade = "C+";
		break;
	case 14:
		grade = "C0";
		break;
	case 13:
		grade = "D+";
		break;
	case 12:
		grade = "D0";
		break;
	default:
		grade = "F";
		break;
	}
	cout << "입력한 점수 : " << score << "입니다." << endl;
	cout << "점수 등급 : " << grade << endl;

	return 0;
}
