#include <iostream>

// 함수의 선언을 별도로 둘 때에는 기본 값의 선언을 함수의 선언부에 위치시켜야 한다. 
int Adder(int num1 = 1, int num2 = 2);// 기본 값 지정은 선언부에서만 가능 

int main()
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(2, 4) << std::endl;
}
int Adder(int num1, int num2)
{
	return num1 + num2; 
}