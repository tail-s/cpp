//첫 번째 C++프로그램 작성 및 테스트

//주석은 프로그램 코드의 설명문이며, 프로그램 실행에는 전혀 관여하지 아니한다.
//C++에서는 2가지의 주석을 사용할 수 있다.
//한 줄짜리 // 으로 표시하면 된다.
//여러 문장을 주석 처리하고자 한다면 /* ,,, */ 을 사용해도 된다.


/*
#include <iostream>은 iostream이라는 헤더 파일을 포함시키라는 전처리기(선행처리키, preprocessor)이다.
iostream 헤더 파일에는 표준 입출력에 필요한 클래스들과 객체들이 정의되어 있다.
따라서 cin과 cout과 같은 객체를 사용하려면 반드시 iostream 파일에 포함시켜야 한다.
*/
#include <iostream>
//#include <stdio.h>
/*
using namespace std; 코드는 C++프로그램에서 변수의 이름이나 함수의 이름과 같은 수많은 이름(식별자)들이 사용되고 
이들 이름들은 이름공간(name space)라고 하는 영역으로 분리되어 저장되어 있다.
C++에서 이름을 사용할 때에는 반드시 "공간::이름" 과 같이 공간명을 이름 앞에 붙여야 한다.
출력을 담당하는 객체인 cout은 std라고 하는 이름 공간에 속한다.
따라서 cout은 원칙적으로는 std::cout << "문자열" <<std::endl; 로 적어야 한다.
매번 std를 붙이는 것이 번거롭기 때문에 이런 경우 사용할 수 있는 것이 using이라는 지시어이다.
using namespace std; 는 바로 우리가 현재 사용하는 이름 공간을 std로 설정하는 문장이다.
따라서 std 안에 모든 이름은 std를 생략하고 사용할 수 있다.
*/
using namespace std;

int main(void) {	//main은 함수명이다. int는 리턴값을 나타내고, ()안에는 매개변수(파라메터, 인자값, Arguments)이 들어오는 공간인데, void는 매개변수가 없다.
	//main()함수는 프로젝트 내에서 오로지 하나만 존재해야 한다. 프로그램의 시작점이기 때문이다.

	cout << "나의 첫 번째 C++프로그램" << endl;
	/*
	* cout << "나의 첫 번째 C++프로그램" << endl; 코드를 실행하면
	* 나의 첫 번째 C++프로그램 이라는 문자열이 출력된다.
	* endl 은 줄의 끝(end of line)을 의미하며 개행을 시켜준다. '\n'과 동일하다.
	* cout은 콘솔 화면에 데이터를 출력하는 작업을 맡은 객체이다.
	* 화면에 데이터를 출력하려면 cout과 << 연산자를 사용하면 된다.
	* 어떠한 데이터도 << 연산자를 사용하여 출력할 수 있다.
	* 한 줄에 여러 개의 << 연산자를 사용해도 무방하다. 출력은 왼쪽에서 오른쪽으로 출력됨
	*/

	cout << 10 << "개의 사과가 있습니다." << endl;
	cout << 'a';

	/*C언어의 함수도 C++에서 사용할 수 있다.
	printf("안녕하세요.\n");*/

	return 0;	//main()함수의 특수성으로 return문을 생략해도 되지만, 앞으로 사용자 정의 함수를 만들 때에는 반드시 리턴타입과 동일한 return문을 작성해야 한다.
	//운영체제가 프로그램을 CPU에게 실행하게끔 스케쥴에 올려주고, CPU가 작업 큐에서 이 프로그램을 실행하게 되는 것이다. 0이 정수값이고 리턴값이 int로 되어 있기 때문에 0을 리턴해준다.
	//보통 0의 값은 프로그램이 정상적으로 종료했음을 알려준다.
}

//Ctrl + Shift + A : 새 항복 파일 만드는 단축키
//Ctrl + F5 : 디버깅 하지 않고 바로 실행
//Ctrl + Shift + / : 주석 처리 및 주석 처리 풀기