// practice_git.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void run1();
void run2();
void run3();

int main()
{
    std::cout << "시작-run2추가\n";
    run1();
    run2();
    run3();

    return 0;
}