/*
실습-1
변수 : 변할 수 있는 값으로 프로그램에서 데이터를 저장하기 위한 메모리 공간을 의미
*/

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void) {
//
//	//변수명 작성
//	//int 7a = 0;	//변수명은 숫자로 시작하면 안된다.
//	//int ab cd = 0;	//변수명 사이에 공백이 들어가면 안된다.
//
//	int age = 28;	//정상적인 변수 선언
//	int i{ 100 };	//int i = 100;	보편화된 초기화 방법
//	short b = 0;
//	bool flag = true;
//	cout << flag << endl;
//	//bool 자료형은 true는 1로, false는 0으로 출력됨을 알 수 있다.
//
//	//변수의 주소 확인
//	//변수는 메모리 스택에 비연속적으로 빈 공간을 찾아 들어간다.
//	//&(앰퍼샌드) : 주소 참조 연산자
//	cout << "변수 age의 주소 : " << &age << endl;
//	cout << "변수 i의 주소 : " << &i << endl;
//	cout << "변수 b의 주소 : " << &b << endl << endl;
//
//	//자료형의 크기(sizeof(데이터 타입 or 변수명))
//	//to_string(정수) : 정수값을 문자열 타입으로 변경시켜주는 string 헤더파일에 존재하는 메소드라고 보면 됨.
//	cout << "char형 자료형의 바이트 크기 : " + to_string(sizeof(char)) << endl;
//	cout << "short형 자료형의 바이트 크기 : " + to_string(sizeof(b)) << endl;
//	cout << "int형 자료형의 바이트 크기 : " + to_string(sizeof(int)) << endl;
//	cout << "long형 자료형의 바이트 크기 : " + to_string(sizeof(long)) << endl;
//	cout << "long long형 자료형의 바이트 크기 : " + to_string(sizeof(long long)) << endl;
//	cout << "float형 자료형의 바이트 크기 : " + to_string(sizeof(float)) << endl;
//	cout << "double형 자료형의 바이트 크기 : " + to_string(sizeof(double)) << endl;
//	cout << "long double형 자료형의 바이트 크기 : " + to_string(sizeof(long double)) << endl;
//	cout << "bool형 자료형의 바이트 크기 : " + to_string(sizeof(bool)) << endl;
//
//	//string 타입(문자열)
//	string s1 = "안녕하세요.";
//	string s2 = "반갑습니다.";
//	//문자열끼리는 + 연산자로 결합 시킬 수 있다.
//	string s3 = s1 + " " + s2 + "!!!";
//	string s4 = "안녕하세요.";
//	cout << s3 << endl;
//	cout << "변수 s1의 주소 : " << &s1 << endl;
//	cout << "변수 s2의 주소 : " << &s2 << endl;
//	cout << "변수 s3의 주소 : " << &s3 << endl;
//
//	bool equal = s1 == s2;
//	bool eq2 = s1 == s4;
//	cout << "s1 == s2 : " << equal << endl;
//	cout << "s1 == s4 : " << eq2 << endl;
//
//	const double TAX_RATE = 0.25;	//기호 상수 선언 및 초기화
//	//상수는 초기화하면 다른 값으로 저장하지 못한다.
//	//TAX_RATE = 0.35;
//
//	//변수는 초기화가 원칙
//	int garbage;
//	//cout << garbage << endl;
//	//초기화되지 않은 garbage 지역 변수를 사용했기에 컴파일 조차 시켜주지 않는다.
//
//	return 0;
//}