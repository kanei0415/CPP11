#include <iostream>

using namespace std;

int main()
{
	cout << "주소 입력 : ";
	char address[100]; 

	//            주소, 길이, 끝나는 문자 
	cin.getline(address, 100, '\n');

	cout << "주소는 " << address << "입니다." << endl;
	
}