//#include <stdio.h> // --> C언어 스타일의 헤더파일 
#include <iostream> // 신버전의 헤더 파일 --> 확장자를 생략 

int main()
{
	int num = 20; 

	// 출력의 기본 구성
	// std::cout << "출력대상1" << "출력대상2" << 출력대상3";

	std::cout << "Hello World" << std::endl;
	// std::endl; --> 줄바꿈 

	std::cout << "Hello " << "World" << std::endl;
	// << 연산자를 통해 둘 이상의 값을 출력할 수 있다. 
	// C++은 서식 지정이 필요가 없다. 
	// 문자열, 숫자 등 전부다 출력 가능 

	std::cout << num << ' ' << 'A'; 
	std::cout << ' ' << 3.14 << std::endl;

}