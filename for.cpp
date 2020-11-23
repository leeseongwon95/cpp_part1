#include <iostream>
using namespace std;

int main() {
  /*
    for 문 : 반복문의 한 종류이다
    형태 : for (초기값; 조건식; 증감값) {} 의 형태로 구성됨
    조건식이 true 면 코드블럭의 코드가 동작된다. 증감값이 없어도 사용 가능 그러면 while 처럼 돌아감
    무한루프를 돌릴때는 for (;;){} 해주면 돌아감 
    for 문에서 초기값은 처음 for 문에 진입할때 딱 1번만 동작한다
    그 후에 조건식을 체크하고 조건식이 true 면 코드블럭의 코드가 동작된 후에 증감값을 처리한다.
    그 후 다시 조건을 체크하고 true 면 동작되고 동작 -> 조건 -> 증감 -> 조건의 순서로 처리되고,
    조건이 false 나 break 를 만나게 되면 for문을 빠져나가게 된다.
  */
  
  for (int i = 0; i < 10; i++) {
    cout << i << endl;
  }

  // 구구단 2단 출력
  for (int i = 1; i < 10; i++) {
    cout << i << " x 2 = " << i * 2 << endl;
  }

  // 1 ~ 100 사이 중 짝수만 출력하는 for문을 작성
  // for (int i = 1; i <= 100; i++) {
  //   if (i % 2 == 0) cout << i << endl;
  // }

  // 1 ~ 100 사이의 숫자중 3 과 7 의 공배수만 출력하는 if 문을 작성
  for (int i = 1; i <= 100; i++) {
    if ((i % 3 == 0) && (i % 7 == 0)) cout << i << endl;
  }

  // 중첩 for 문 : for 문안에 또다른 for 문이 존재하는 형태

  // 2단 ~ 9단 구구단 
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      cout << i << " x " << j << " = " << i * j << endl;
    }
  }

  // 별찍기

  /*
  *
  **
  ***
  ****
  *****
  */
  
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }

  /*
  *****
  ****
  ***
  **
  *
  */

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5 - i; j++) {
      cout << "*";
    }
    cout << endl;
  }

  /*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
  */

  for (int i = 0; i < 5; i++) {
    // 공백을 출력하기 위한 for 문
    for (int j = 0; j < 5 - 1 - i; j++) {
      cout << " ";
    }
    // *을 출력하기 위한 for 문
    for (int j = 0; j < i * 2 + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << " ";
    }
    for (int j = 2 * 4 - 1; j > 2 * i; j--) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}