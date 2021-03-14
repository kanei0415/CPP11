#include <iostream>

int main()
{
	// 문자열의 입력 방식도 정수와 비슷하다. 
	// std::cin >> 배열명;
	char name[100]; 
	char lang[200];

	std::cout << "이름 입력 : ";
	std::cin >> name;
	std::cout << "좋아하는 프로그래밍 언어 : ";
	std::cin >> lang;

	std::cout << "내 이름은 " << name << "입니다.\n";
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;
}