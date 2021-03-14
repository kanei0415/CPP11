// Reference
/*
	참조자 
		> 하나의 메모리 공간에 둘 이상의 이름을 부여 (별칭)
		> 같은 공간을 사용 (메모리 공간을 따로 사용x)
		
	참조자 만드는 법 
		int num = 10; 
		int &ref = num; 
			> int로 만들어진 공간에 이름을 하나 더 부여 하려면 
		      같은 자료형으로 만들어야 한다. 
			> 부여하려는 변수이름 앞에 &를 꼭 붙여준다. 
*/
#include <iostream>

using namespace std;

int main()
{
	int num1 = 1020; 
	int &num2 = num1; 

	num2 = 3047;
	cout << "값 : " << num1 << endl;
	cout << "값 : " << num2 << endl;

	cout << "주소 값1 : " << &num1 << endl;
	cout << "주소 값2 : " << &num2 << endl;

	int &num3 = num1; 
	int &num4 = num1; 
	int &num5 = num2; 
	
	/*
		참조로 사용 못하는 것 
			1. 상수는 참조자 선언이 불가능 
				ex) int &ref = 20; (x)

			2. 참조자는 생성과 동시에 누군가를 참조해야 한다. 
				ex) int &ref; (x)

			3. NULL로 추기화하는 것도 불가능 
				ex) int &ref = NULL; 

				> 참조자는 선언과 동시에 누군가를 참조해야 하며 참조의 대상은 기본적으로 
				  변수가 되어야 한다. 
				> 참조자는 참조의 대상을 변경할 수 없다. 
				> 배열의 요소는 참조자의 선언이 가능
	*/
	int arr[3] = { 1, 2, 3 };
	int &ref1 = arr[0]; // 배열의 첫 번째 요소에 이름 부여 
	int &ref2 = arr[1];
	int &ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	// 포인터 변수도 참조할 수 있다. (참조자 선언 가능)
	int num = 10; 
	int * ptr = &num; 
	int ** dptr = &ptr; 

	int &ref = num; 
	int * &pref = ptr; 
	int ** &dpref = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

}