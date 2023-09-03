//수식과 연산자 - 정수와 정수, 정수와 실수, 강제 캐스팅, %, 증감연산자

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void) {
//
//	int x = 5;
//	int y = 3;
//	//강제 캐스팅(명시적 형변환) - int의 값을 float형태로 변경
//	//실수 / 정수는 실수가 된다.
//	float result = (float) x / y;
//
//	//정수 / 정수는 정수이다.
//	cout << x / y << endl;
//	cout << result << endl;
//
//	//나머지를 구하는 연산자
//	cout << x % y << endl;
//
//	if (x % y == 0) {
//		cout << to_string(x) + "는 " + to_string(y) + "의 배수 입니다." << endl;
//	}
//	else {
//		cout << to_string(x) + "는 " + to_string(y) + "의 배수가 아닙니다." << endl;
//	}
//
//	//증감 연산자 ( ++ : 증가 연산자, -- : 감소 연산자 )
//	int i = 10;
//
//	//후위 증가 연산자 : 후위 증가 연선자는 ; 명령을 실행한 후 값을 증가 시킨다.
//	cout << i++ << endl;
//	cout << i << endl;
//
//	//전위 증가 연산자 : 전위 증가 연산자는 ; 명령을 실행하기 전에 선 증가를 시킨다.
//	cout << ++i << endl;
//	cout << i << endl;
//
//	return 0;
//}