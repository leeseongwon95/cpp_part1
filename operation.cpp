#include <iostream>

using namespace std;

int main()
{
  // 사칙연산자 : + - * / % 
  // 관계연산자 : 값대 값을 연산, 참/거짓으로 반환
  // < > >= == !=

  cout << "10 < 20 = " << (10 < 20) << endl;
  cout << "10 <= 20 = " << (10 <= 20) << endl;
  cout << "10 > 20 = " << (10 > 20) << endl;
  cout << "10 >= 20 = " << (10 >= 20) << endl;
  cout << "10 == 20 = " << (10 == 20) << endl;
  cout << "10 != 20 = " << (10 != 20) << endl;

  // 논리 연산자 && || !
  // A  B  AND  OR
  // 0  0   0   0
  // 1  0   0   1
  // 0  1   0   1
  // 1  1   1   1 

  // A  NOT
  // 0   1
  // 1   0
  int Number;
  cout << "숫자를 입력하세요 : ";
  cin >> Number;

  cout << "10 ~ 20 = " << (10 <= Number && Number <= 20) << endl;
  return 0;
}