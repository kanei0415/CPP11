#include <iostream>

/*
	함수 오버로딩 
		C언어에서는 한 프로젝트에 같은 이름으로 함수를 만들 수 없다. 
		ex) int Func1() {...}
		    int Func1(int num) {...}
				--> C언어에서는 무엇을 호출할지 모르기 때문에 오류 
				--> C언어는 함수를 호출할 때 함수의 이름으로만 호출하기 때문

			C++에서는 함수의 이름과 매개변수의 인자 값으로 구분이 가능 
				> 함수 오버로딩의 개념 
*/

int Func1(int num);
int Func1(int a, int b);

int main()
{
	std::cout << "함수의 결과는 " << Func1(20, 20) << "입니다.\n";
	std::cout << "함수의 결과는 " << Func1(20) << "입니다.\n";
	// C++은 함수 호출 시 '함수의 이름'과 '전달되는 인자의 정보'를 동시에 참조하여 호출
	// 매개변수의 선언이 다르다면 동일한 이름의 함수도 정의 가능

	/*
		함수 오버로딩의 조건 
			1. 매개변수의 자료형이 다르면 함수 오버로딩 가능
			2. 매개변수의 수가 다르면 가능
			3. 반환형의 차이는 인정x (void, int차이)
	*/
}
int Func1(int num)
{
	num++; 
	return num;
}
int Func1(int a, int b)
{
	return a + b; 
}