//switch문의 실습-1
//조건문에는 if문과 switch구문이 존재한다. switch구문은 if~else if~else구문보다 가독성이 
//좋다는 점 외에는 별다른 장점은 없다.
//switch(조건)-case 상수 - break(switch블럭을 벗어난 용도)-default(else구문과 유사, 옵션)
//switch문의 용도 : 한정된 값, 정형화 되어 있는 값(동서남북, 1~12월, 학점, 요일 등)즉 
//딱 정해셔 있는 값을 분기할 때, 가독성이 좋기 때문에 사용할 수도 있다.
//모든 switch문은 if문으로 변경이 가능하지만, 반대로 모든 if문은 switch문으로 변경이 불가
//하다(중요)
//switch의 조건은 문자형 상수나 정수형 상수를 사용이 가능하므로 다룰 수 있는 조건 자체가
//if문에 비해서 적다.
//break문이 없다면 하위 명령문을 다 실행한다.하여 반드시 break문을 지정을 해야 한다.

//계절을 선택하는 프로그램

//#include <iostream>
//#include <string>
//using namespace std;
//int main(void) {
//
//	char season = ' ';
////	string str = ":";
//	cout << "봄 : A 또는 a를 누르세요" << endl;
//	cout << "여름 : B 또는 b를 누르세요" << endl;
//	cout << "가을 : C 또는 c를 누르세요" << endl;
//	cout << "겨울 : D 또는 d를 누르세요" << endl;
//	cout << "--------------------------------" << endl;
//
//	cout << "좋아하는 계절을 입력해 주세요 : ";
//	cin >> season;
//
//	//입력받은 값으로 분기
//	//문자열을 조건의 값으로 사용하면 안된다.(자바는 가능)
//	switch (season) {
//		case 'A' :
//		case 'a' :
//			cout << "선택한 계절은 봄입니다." << endl;
//			cout << "메시지 : 만물이 소생하는 계절" << endl;
//			//break문이 없다면 선택된 case 절의 명령문 뿐만 아니라 하위에 있는 명령문 
//			//또한 다 실행된다.
//			break;	
//		case 'B' :
//		case 'b' :
//			cout << "선택한 계절은 여름입니다." << endl;
//			cout << "메시지 : 바캉스를 떠나는 계절" << endl;
//			break;
//		case 'C' :
//		case 'c' :
//			cout << "선택한 계절은 가을입니다." << endl;
//			cout << "메시지 : 곡식과 과일이 풍성한 계절" << endl;
//			break;
//		case 'D' :
//		case 'd' :
//			cout << "선택한 계절은 겨울입니다." << endl;
//			cout << "메시지 : 새하얀 눈이 덮인 스키의 계절" << endl;
//			break;
//		default:
//			cout << "선택한 계절이 없습니다." << endl;
//			cout << "알파벳은 대소문자 구별없이 A,B,C,D만 허용합니다." << endl;
//			break;
//	}
//	return 0;
//}
