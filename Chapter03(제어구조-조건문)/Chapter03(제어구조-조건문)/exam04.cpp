//if~else if .... else문의 실습과 한계점

//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//
//	//성적 처리 프로그램
//	int score = 0;
//	char grade = ' ';
//
//	cout << "점수를 입력해주세요(0~100) : ";
//	cin >> score;

	//if, else if, else 구문을 if문으로도 대체가 가능하나 프로그램에 CPU가 if문 하나하나
	//전부 다 관여하게 되어 프로그램의 성능에 아주 치명적이다.
	//if (score >= 90) {
	//	grade = 'A';
	//}
	//if (score >= 80) {
	//	grade = 'B';
	//}
	//if (score >= 70) {
	//	grade = 'C';
	//}
	//if (score >= 60) {
	//	grade = 'D';
	//}
	//if (score < 60) {
	//	grade = 'F';
	//}
	// 
	//위의 프로그램을 아래와 같이 if~else if~else 구문으로 바꾸면 적어도 if문으로 구성된
	//조건보다는 CPU의 관여도가 같거나 적다.
	
	//한계점 해결방법-1번째
	//입력한 점수가 100점을 초과하거나 음수를 입력했을 때
	//if (score > 100 || score < 0) {
	//	cout << "입력하신 값은 0~100사의 값이 아닙니다." << endl;
	//	cout << "프로그램을 종료합니다." << endl;
	//	return 0;
	//}
	
	//fail()은 cin객체의 메소드로써 선언한 타입과 일치하지 아니하면 true를 리턴한다.
//	if (cin.fail()) {
//		cout << "입력하신 값은 0~100사의 값이 아닙니다." << endl;
//		cout << "프로그램을 종료합니다." << endl;
//		return 0;
//	}
//
//
//	if (score >= 90 && score <= 100) { //구간을 정함
//		grade = 'A';
//	}
//	else if (score >= 80 && score < 90) {
//		grade = 'B';
//	}
//	else if (score >= 70 && score < 80) {
//		grade = 'C';
//	}
//	else if (score >= 60 && score < 70) {
//		grade = 'D';
//	}
//	else if (score < 60 && score >= 0) {
//		grade = 'F';
//	}	
//
//	cout << "입력한 점수 : " << score << endl;
//	cout << "점수 등급 : " << grade << endl;
//
//	//디버깅(debugging) : 에러를 잡아나가는 과정이라고 통상 칭한다. 때로는 디버깅은
//	//프로그램의 흐름을 보고자 할 때도 사용한다.
//	//디버깅 방법 : 먼저 어디서부터 시작할 껀지 브레이크 포인트(중단점, 토클 포인트)를
//	//설정한다. 그리고 F5번을 눌러서 디버그 모드로 프로그램을 실행 시킨다.
//	//F11번 키를 이용하여 한 단계씩 프로그램의 실행과정을 살펴본다.(변수,배열,객체,
//	//메모리주소, CPU관여도 등)
//	//Ctrl + F5키를 이용하면 브레이크 포인트는 무시된다.(중요)
//
//	return 0;	
//}