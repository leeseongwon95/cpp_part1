#include <iostream> 

// 실행과정 : 컴파일 -> 빌드 -> 실행
// 컴파일 : 번역작업이다.

using namespace std; // std 생략 가능 

int main_cout()
{
  // c++ 표준 기능 대부분 std 라는 namespace 안에 존재하고 있다.
  // 이름이 겹쳐지는 것을 방지해주기 위해
  // cout : 콘솔창에서 출력해주는 기능
  // endl : 개행기능
  std::cout << "Hello World\n" << std::endl;
  std::cout << "Hello\n" << std::endl;

  cout << "Hello World\n" << endl;
  cout << "Hello\n" << endl;
  return 0;
}