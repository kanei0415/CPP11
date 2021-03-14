// bool 

#include <iostream>

using namespace std;

bool IsPositive(int num); // bool 자료형을 리턴하는 함수 

int main()
{
	/*
		[bool 자료형]
			- 참(true)과 거짓(false)을 의미하는 자료형 
			- C언어에서는 0이 거짓, 0이 아닌 정수가 참 
			- C언어에서는 #define true 1 
						 #define false 0 
			- C++ 표준에서는 bool 자료형을 따로 만들어서 제공 (1, 0의 값이 아님)
	*/
	int num = 10; 

	cout << "true : " << true << endl;
	cout << "false : " << false << endl;
	// C++에서 true의 값을 출력하면 int형으로 변환하여 출력 (C언어와의 호환성)
	int i = 0; 
	while (true) // 무한 반복 
	{
		cout << i++ << ' ';
		if (i > num)
		{
			break; 
		}
	}

	cout << "\n1의 크기 : " << sizeof(1) << endl;
	cout << "0의 크기 : " << sizeof(0) << endl;
	cout << "true의 크기 : " << sizeof(true) << endl;
	cout << "false의 크기 : " << sizeof(false) << endl;

	bool ispos; //bool 자료형으로 선언된 변수 (1byte)
	
	ispos = IsPositive(-1);
}
bool IsPositive(int num)
{
	if (num < 0)
	{
		return true;
	}
	else
	{
		return false; 
	}
}