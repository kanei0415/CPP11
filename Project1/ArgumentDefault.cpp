#include <iostream>

/*
	매개변수의 기본 값 
		매개변수에 기본 값을 지정하여 사용 
			> 매개변수에 값을 전달하지 않으면 기본 값을 그대로 사용 
			> 전달하면 전달 된 값을 사용 
*/

int func1(int num = 7)
{
	return num + 1; 
}

int func2(int num1 = 5, int num2 = 4)
{
	return num1 + num2;
}

int main()
{
	std::cout << "함수1 호출 : " << func1() << std::endl;
	std::cout << "함수1 호출 : " << func1(20) << std::endl;
	std::cout << std::endl;

	std::cout << "함수2 호출 : " << func2() << std::endl;
	std::cout << "함수2 호출 : " << func2(10) << std::endl;
	std::cout << "함수2 호출 : " << func2(20, 30) << std::endl;

}