#include <iostream>

/*
	매크로 함수 장점 
		> 함수가 인라인화 되어 성능의 향상으로 이어질 수 있다. 
			>> 함수이용 시 스택 사용/제거 

	매크로 함수 단점 
		> 함수의 정의 방식이 일반함수에 비해서 복잡하다. 
		> 복잡한 함수의 정의에는 한계가 있다. 

	인라인 함수 : 매크로의 단점을 보완한 함수 
		> 일반 함수는 함수가 호출될 때마다 다른 레지스터와 함께 실행 중인 현재 명령어의
		  주소를 저장해야 되고(반환) 모든 함수 매개변수를 생성 해야 한다. 
		> 인라인 함수는 컴파일러가 코드를 컴파일하면 함수 자체의 내용을 복사하여 실행한다. 
		> 일반적으로 성능이 향상되지만 코드가 길거나 재귀호출이 있는 경우는 사용x 
*/

# define SQUARE(X)	((X) * (X))

int SQUARE2(int x)
{
	return x * x;
}

inline int SQUARE3(int x) // 컴파일러에 의해서 처리, 컴파일러가 무시할 수 있음. 
{
	return x * x;
}

int main()
{
	std::cout << "SQUARE(5) : " << SQUARE(5) << std::endl; // 단순치환 
	std::cout << "SQUARE(1+4) : " << SQUARE(1+4) << std::endl;
	std::cout << "SQUARE2(1+4) : " << SQUARE2(1 + 4) << std::endl;
	std::cout << "SQUARE3(1+4) : " << SQUARE3(1 + 4) << std::endl;
}