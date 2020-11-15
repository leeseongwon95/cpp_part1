#include <iostream>

using namespace std;

int main_variable()
{ 
  /*
  변수 : 변하는 값이 바뀔 수 있다.
  용량의 최소 단위 : bit
  1 byte = 8 bit
  1 kbyte = 1024byte
  1 mbyte = 1024kbyte
  1 gbyte = 1024mbyte
  1 tbyte = 1024tbyte

  문자를 표현하는 방법 : ASCII 코드 표를 가지고 있다.
  false : 0
  true : 0이 아닌 모든 수
  unsigned : 부호가 없다.
  종류    |    용량   |    데이터   |   표현범위             |      unsigned          |
  char   |   1byte  |    문자    |  -128 - 127          |       0 - 255          |
  bool   |   1byte  |   참/거짓   |  true / false        |        true / false    |
  short  |   2byte  |    정수    |  -32768 - 32767      |        0 - 65535       |
  int    |   4byte  |    정수    |  약 -22억 - 21억       |       0 - 약 43억       |
  float  |   4byte  |    실수    |  
  double |   8byte  |    실수    |
  */

  int Number = 10;
  Number = 20;

  cout << Number << endl;

  bool bTest = true;
  bTest = false;

  cout << bTest << endl;

  // 영문이나 숫자는 1byte를 차지한다 . 하지만 한글이나 한문 등의 문자들은 2byte를 차지한다
  // 그래서 char 변수 하나에 저장하기가 힘들다.
  char cTest = 't';

  cout << cTest << endl;

  float fNumber = 3.14f; // f 를 안붙이면 double 로 들어감

  cout << fNumber << endl;

  double dNumber = 123.4567;

  cout << dNumber << endl;
  return 0;
}