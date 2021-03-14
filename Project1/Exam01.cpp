#include <iostream>

int main()
{
	int val1, val2;

	std::cout << "두 개의 숫자 입력 : ";
	std::cin >> val1 >> val2; // 두 개 이상의 값을 입력 받을 때는 >> 연산자를 사용
	// 입력 데이터 구분은 스페이스바, 엔터, 탭과 같은 공백을 통해서 이뤄진다. 

	// 두 수 사이의 정수 합계 구하기 
	int result = 0;

	if (val1 < val2)
	{
		// for문 안에서도 변수의 선언이 가능 -> 지역변수(for문 안에서만 사용가능)
		for (int i = val1 + 1; i < val2; i++) // 입력한 숫자를 제외한 사이의 합계 
		{
			result += i; 
		}
	}
	else
	{
		for (int i = val2 + i; i < val1; i++)
		{
			result += i; 
		}
	}
	std::cout << "두 수 사이의 정수 합 : " << result << std::endl;
}