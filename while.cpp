#include <iostream>
#include <time.h>
using namespace std;

enum SRP {
  SRP_S = 1,
  SRP_R,
  SRP_P,
  SRP_END
};

int main() {
  /*
    반복문 : 특정 작업을 반복해서 수행해주는 기능이다.
    종류 : for, while, do while 3종류가 존재한다.
    while(조건식) {} 의 형태로 구성된다.
    while문은 조건식을 체크해서 true 일 경우 코드블럭 안에 코드가 동작되고 다시 조건식을 체크한다.
    조건식이 false 가 되면 while 문을 빠져나오게 된다.
    반복문안에서 break 를 만나게 되면 해당 반복문은 빠져나오게 된다.
  */

  int iNumber = 0;
  while (iNumber < 10) {
    cout << iNumber << endl;
    ++iNumber;

    if (iNumber == 4) {
      break;
    }
  }
  // "cls"라는 도스명령어가 콘솔창을 깨끗하게 지워줌
  system("cls");

  // 난수테이블 작성
  srand((unsigned int)time(0));

  int iPlayer, iAI;

  while (true) {
    cout << "1. 가위" << endl;
    cout << "2. 바위" << endl;
    cout << "3. 보" << endl;
    cout << "4. 종료" << endl;
    cout << "메뉴를 선택하세요" << endl;
    cin >> iPlayer;

    if (iPlayer < SRP_S && iPlayer > SRP_END) {
      cout << "잘못된 값을 입력하셨습니다" << endl;
      // 일시정지
      system("pause");
      // continue : 반복문의 시작점으로 이동 시켜주는 기능 
      continue;
    }
    else if (iPlayer == SRP_END) 
      break;

    // 봇이 선택을 한다.
    iAI = rand() % 3 + SRP_S; // 1 ~ 3

    switch (iAI) {
      case SRP_S: cout << "AI : 가위" << endl; break;
      case SRP_R: cout << "AI : 바위" << endl; break;
      case SRP_P: cout << "AI : 보" << endl; break;
    }

    int iWin = iPlayer - iAI;

    // if (iWin == 1 || iWin == -2) cout << "Player 승리" << endl;
    // if (iWin == 0) cout << "무승부" << endl; 
    // if (iWin == 2 || iWin == -1) cout << "Player 패배" << endl;

    switch (iWin) {
      case 1:
      case -2: cout << "Player 승리" << endl; break;
      case 0: cout << "무승부" << endl; break;
      default: cout << "Player 패배" << endl; break;
    }

  }

  return 0;
}