// ArgumentDefault3

#include <iostream>

// 매개변수의 일부에만 기본 값을 지정 (첫 번째 인자는 반드시 전달)
int func(int num1, int num2 = 6, int num3 = 8)
{
	return num1 + num2 + num3; 
}

// 매개변수의 기본값을 사용하려면 맨뒤에 위치해야 한다. (중간에 지정값이 없으면 오류)

int main()
{
	std::cout << "함수 호출 : " << func(10) << std::endl;
	std::cout << "함수 호출 : " << func(10, 7) << std::endl;
	std::cout << "함수 호출 : " << func(10, 7, 9) << std::endl;
}