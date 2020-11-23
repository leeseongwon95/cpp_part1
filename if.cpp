#include <iostream>
#include <time.h>

using namespace std;

int main() {
  /*
    분기문에는 크게 2가지 종류가 있다. if 문, switch 문이 존재한다.
    if 문 : 조건을 체크해주는 기능
    형태 : if(조건식) {}(코드블럭)
    if 문은 조건식이 true가 될 경우 코드블럭 안의 코드가 동작한다.
    flase일 경우에는 동작되지 않는다
  */
  const int iAttack = 0x00000001;   //     1
  const int iAmmor = 0x00000002;    //    10
  const int iHP = 0x00000004;       //   100
  const int iMP = 0x00000008;       //  1000
  const int iCritical = 0x00000010; // 10000

  int iNumber;
  
  int iBuf = iAttack | iHP | iCritical;

  if (true) {
    cout << "if 문 조건이 true 입니다." << endl;
  }

  // 버프가 있는지 확인한다.
  if ((iBuf & iAttack) != 0) {
    cout << "Attack 버프가 있습니다." << endl;
  }
  // if 문 아래에 들어갈 코드가 한 줄 일경우 {} (코드블럭) 을 생략할 수 있다.
  if ((iBuf & iAmmor) != 0) 
    cout << "Ammor 버프가 있습니다." << endl;

  if ((iBuf & iHP) != 0) 
    cout << "HP 버프가 있습니다." << endl;

  if ((iBuf & iMP) != 0) 
    cout << "MP 버프가 있습니다." << endl;

  if ((iBuf & iCritical) != 0) 
    cout << "Critical 버프가 있습니다." << endl;

  /*
    else : if 문과 반드시 같이 사용이 되어야 한다.
    if 문 조건이 false 일 경우 else 가 있다면 else 구문 안의 코드가 동작한다.
    else if : if문과 반드시 같이 사용되어야 하며,
    if 문 보다는 아래에 와야하고 else 문 보다는 위에 와야 한다.
    else if 는 자신의 위에 있는 조건식이 false 일 경우 다음 else if 의 조건식을 체크한다.
    else if 는 몇개든 사용 가능하다.
  */
 
  if (false)
    cout << "if 문 조건이 true 입니다." << endl;
  else 
    cout << "if 문 조건이 false 입니다." << endl;

  cout << "숫자를 입력하세요. ";
  cin >> iNumber;

  if (10 <= iNumber && iNumber <= 20) 
    cout << "10 ~ 20 사이의 숫자입니다." << endl;
  else if (21 <= iNumber && iNumber <= 30)
    cout << "21 ~ 30 사이의 숫자입니다." << endl;
  else if (31 <= iNumber && iNumber <= 40)
    cout << "31 ~ 40 사이의 숫자입니다." << endl;
  else
    cout << "그 외의 숫자 입니다." << endl;

  // 난수 발생 (c언어나 c++ 에서는 난수를 발생시키기 위해서 난수 table 이라는 것을 가지고 있음)
  srand((unsigned int)time(0)); // 변수의 형변환 
  // time에서 나오는 값을 unsigned int 인척 하라고 명령함
  // 형변환 안하고 해도 에러는 없지만 충돌을 일으킬 위험이 있음.

  cout << rand() << endl;
  cout << (rand() % 101) << endl; // 0 ~ 100
  cout << (rand() % 101 + 100) << endl; // 100 ~ 200
  cout << (rand() % 10000 / 100.f) << endl; // 0 ~ 99.99

  int iUpgrade = 0;
  cout << "Upgrade 기본 수치를 입력하세요";
  cin >> iUpgrade;

  // 강화 확률을 구한다.
  float fPercent = rand() % 10000 / 100.f;

  // 강화 확률 : 0 ~ 3강 : 100%성공 
  // 4 ~ 6강 : 40% 
  // 7 ~ 9강 : 10% 
  // 10 ~ 13강 : 1%
  // 14 ~ 15강 : 0.01%
  cout << "Upgrade : " << iUpgrade << endl;
  cout << "Percent : " << fPercent << endl;

  if (iUpgrade <= 3)
    cout << "강화 성공" << endl;

  else if (4 <= iUpgrade && iUpgrade <= 6) {
    if (fPercent < 40.f)
      cout << "강화 성공" << endl;
    else
      cout << "강화 실패" << endl;
  }

  else if (7 <= iUpgrade && iUpgrade <= 9) {
    if (fPercent < 10.f)
      cout << "강화 성공" << endl;
    else
      cout << "강화 실패" << endl;
  }
  else if (10 <= iUpgrade && iUpgrade <= 13) {
    if (fPercent < 1.f)
      cout << "강화 성공" << endl;
    else
      cout << "강화 실패" << endl;
  }
  else if (14 <= iUpgrade && iUpgrade <= 15) {
    if (fPercent < 0.01f)
      cout << "강화 성공" << endl;
    else
      cout << "강화 실패" << endl;
  }

  return 0;
}