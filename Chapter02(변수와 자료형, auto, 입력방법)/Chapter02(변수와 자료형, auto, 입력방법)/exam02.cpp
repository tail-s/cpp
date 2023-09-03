/*
* auto 키워드 : 자동변수라는 의미밖에 없었지만 C++ 11 부터 auto의 의미가 바뀌었다.
* 자료형을 생략할 때 사용할  수 있다.
* 자동 타입 추론(automatic type deduction)
*/

//#include <iostream>
//#include <string>
//using namespace std;
//
////함수에서의 매개변수로 auto를 사용할 수 없다.
//auto add(int x, int y) {
//	return x + y;	//int + int = int, 정수 + 정수 = 정수(소수점 값을 버림)
//					//int + double = double, 정수 + 실수 = 실수
//}
//
//int main(void) {
//
//	double d = 1.0;	//double(8바이트) 형 타입인 변수 d에 1.0으로 초기화
//	auto ad = 1;	//자동 타입 추론에 근거하여 대입되는 값에 따라 자료형이 바뀌고 있다.
//	auto result = add(10, 20);
//
//	cout << "변수 d의 바이트 크기 : " << sizeof(d) << endl;
//	cout << "변수 ad의 바이트 크기 : " << sizeof(ad) << endl;
//
//	cout << "함수 add()의 리턴값 : " << result << "바이트 크기 : " << sizeof(result) << endl;
//
//	return 0;
//}