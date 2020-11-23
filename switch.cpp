#include <iostream>
using namespace std;

/*
  열거체 : 연속된 숫자에 이름을 부여할 수 있는 기능이다.
  enum (쓰면 진짜 편하고 가독성도 엄청 좋아짐)
  enum 열거체명 {} 의 형태로 구성된다.
  열거체명을 이용해서 열거체 타입의 변수의 선언도 가능하다.
  즉, 열거체 자체가 사용자정의 변수 타입이 될 수도 있다.
  열거체는 숫자에 이름을 붙여주는 기능이다.
*/
enum NUM {
  NUM_0, // 아무것도 부여하지 않을 경우 0부터 1씩 차례로 값이 부여된다.
  NUM_1,
  NUM_2,
  NUM_3
};

#define NUM_4 4 // 4가 됨
// 앞에 # 이 붙으면 전처리기 

int main() {
  /*
    switch 문 : 분기문의 한 종류이다. if 문이 조건을 체크하는 분기문이라면
    switch문은 값이 뭔지를 체크하는 분기문
    형태 : switch(변수) {} 의 형태로 구성됨.
    코드블럭 안에는 case break 구문이 들어가가 됨.
    case 상수 : 의 형태로 처리가 되고 변수값이 무엇인가에 따라 case 뒤에 오는 상수를 비교하게 된다.
  */
  int iNumber;
  cout << "숫자를 입력하세요.";
  cin >> iNumber;

  switch (iNumber) {
    case NUM_1: cout << "1임" << endl; break;
    case NUM_2: cout << "2임" << endl; break;
    case NUM_3: cout << "3임" << endl; break;
    case NUM_4: cout << "4임" << endl; break;
    default: cout << "그 외의 숫자임" << endl; break;
  }

  // 열거체 타입의 변수를 선언했다.
  // 열거체 타입의 변수는 무조건 4byte를 차지하게 된다.
  // 열거체를 이용해서 선언한 변수는 값의 표현 범위가 열거체에 나열된 값을 안에서 선택해서 사용된다.
  NUM eNum = (NUM)10; // 타입 캐스팅

  // sizeof(타입 or 변수) 를 하게 되면 해당 타입 혹은 변수의 메모리 크기를 구해준다.
  cout << sizeof(NUM) << endl;
  // typeid(타입 or 변수).name() 을 하게 되면 typeid 안에 들어간 타입 혹은 변수의
  // 타입을 문자열로 반환해준다.
  cout << typeid(eNum).name() << endl;

  return 0;
}