#include <iostream>
using namespace std;

int main() {
  // 상수 : 변하지 않는 수, 값을 한번 지정해놓으면 바꿀 수 없다.
  // 상수는 선언과 동시에 값을 지정해두어야 한다.
  // 헝가리안 표기법 : 변수 이름을 지을 때 어떤 타입인지 알려주는 약자를 하나 붙여 준다. 코드를 볼때 가독성이 좋아진다. (int 는 i)
  const int iAttack = 0x00000001;   //     1
  const int iAmmor = 0x00000002;    //    10
  const int iHP = 0x00000004;       //   100
  const int iMP = 0x00000008;       //  1000
  const int iCritical = 0x00000010; // 10000

  
  int iBuf = iAttack | iHP | iCritical; // 001 | 100 = 00101 | 10000 = 10101 <- 버프 값

  // 연산자 축약형 : 연산자를 줄여서 사용할 수 있다.
  // 아래를 풀어서 쓰면 iBuf = iBuf ^ iHP (iBuf ^= iHP)
  // 스위치 같은 걸 만들 수 있다. XOR 을 쓰면 !
  // 10101 ^ 00100 = 10001 
  iBuf ^= iHP;

  // 10001 ^ 00100 = 10101
  iBuf ^= iHP; 
  
  cout << "Attack : " << (iBuf & iAttack) << endl; // 10101 & 00001 = 00001 (1)(AND 연산자)
  
  cout << "Ammor : " << (iBuf & iAmmor) << endl; // 10101 & 00010 = 00000 (0)(아머가 없음)
  
  cout << "HP : " << (iBuf & iHP) << endl; // 10101 & 00100 = 00100 (4)
  
  cout << "MP : " << (iBuf & iMP) << endl; // 10101 & 01000 = 00000 (0)

  /*
  critical 의 값이 16진수로 10 이고 10진수로 16임.
  16진수 attack = 1  hp = 4    creatical = 10
  2진수  attack = 1  hp =  100  creatical = 10000 
  1 | 100 | 10000  결과는 10101 입니다
  10101 & 10000 => 10000이지요 그러면 10진수 16이 출력되는것입니다.
  */
  cout << "Critical : " << (iBuf & iCritical) << endl; 

  /*
    쉬프트 연산자 : <<, >> 값 대 값을 연산하여 값으로 나오게 된다.
    이 연산자 또한 2진수 단위의 연산을 하게 된다.
    20 << 2 = 80 (2^2 곱한값)
    20 << 3 = 160 (2^3 곱한값)
    20 << 4 = 320 (2^4 곱한값)
    연산이 단순해서 제곱단위 곱하기는 속도가 빠름
    20을 2진수로 변환
    10100 + 뒤애 00 = 1010000
    10100 + 뒤에 000 = 10100000
    10100 + 뒤에 0000 = 101000000

    20 >> 2 = 5 (2^2 나눈값)
    20 >> 3 = 2 (2^3 나눈값)
    
    실제 컴퓨터에서는 나눗셈이 무거운 연산임 속도를 보장 받을 수 있다.
    0.5 곱하는거 보다 쉬프트 연산이 더 빠름

    10100 - 뒤에 00 지워 = 00101
    10100 - 뒤에 000 지워 = 00010
  */
  int iHigh = 187;
  int iLow = 13560;

  int iNumber = iHigh;
  
  // iNumber에는 187이 들어가 있다. 이 값을 <- 이 방향으로 16비트 이동시키면
  // 상위 16비트에 값이 들어가게 된다.
  iNumber <<= 16;

  // 하위 16비트를 채운다
  iNumber |= iLow;

  // High 값을 출력한다
  cout << "High : " << (iNumber >> 16) << endl;
  cout << "Low : " << (iNumber & 0x0000ffff) << endl;

  // 증감연산자 : ++ -- 가 있다. 1 증가 1 감소
  iNumber = 10;

  // 전치
  ++iNumber;

  // 후치
  iNumber++;

  cout << ++iNumber << endl;
  cout << iNumber++ << endl; // 왜 13 ? 출력먼저하고 올림
  cout << iNumber << endl;
  return 0;
}