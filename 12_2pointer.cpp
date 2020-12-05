// 2중 포인터
#include <iostream>
using namespace std;

int main() 
{
  int iNumber1 = 1111;
  int iNumber = 2222;
  int *pNum;
  pNum = &iNumber;
  // 이중 포인터 : *을 2개 붙인다. 일반 포인터 변수가 일반 변수의 메모리주소를 저장하는 변수라면
  // 이중포인터는 포인터의 포인터이다. 
  // 즉, 이중포인터는 포인터 변수의 메모리 주소를 저장하는 포인터이다.
  // 이중포인터도 포인터 원리랑 똑같음 그냥 포인터가 하나 늘어난 것 뿐 특별한 기능이 있는 것은 아님
  // 메모리 주소 값을 가리키고 역참조가 가능하다
  int **ppNum = &pNum;

  *ppNum = &iNumber1;
  *pNum = 3333;

  cout << "iNuber1 : " << iNumber1 << endl;
  cout << "iNumber : " << iNumber << endl;
  cout << "iNumber Address : " << &iNumber << endl;
  cout << "*pNum : " << *pNum << endl;
  cout << "pNum Value : " << pNum << endl;
  cout << "pNum Address : " << &pNum << endl;
  cout << "*ppNum : " << *ppNum << endl;
  cout << "**ppNum : " << **ppNum << endl;
  cout << "ppNum Address : " << &ppNum << endl;
  

  return 0;
}