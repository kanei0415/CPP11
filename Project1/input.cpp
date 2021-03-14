#include <iostream>

int main()
{
	/*
		입력 구조 
			std::cin >> 변수;
	*/
	int val1 = 0; 
	std::cout << "첫 번째 숫자 입력 : "; 
	std::cin >> val1;
	
	// 과거의 C표준에는 반드시 변수를 선언할 때 가장 위에 선언 

	int val2; // C++은 제한을 두지 않는다. 
	std::cout << "두 번째 숫자 입력 : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈 결과 : " << result << std::endl;

	char val3;
	std::cout << "문자 입력 : ";
	std::cin >> val3; 
	std::cout << "입력한 문자는 " << val3 << "입니다." << std::endl;

}