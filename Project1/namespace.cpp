#include <iostream>



namespace BestComImpl
{	// BestComImpl 이름 공간 
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}
namespace ProgComImpl
{	// ProgComImpl 이름 공간 
	void SimpleFunc(void)
	{
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

int main()
{
	/*
		namespace : 이름 공간 
			> 같은 이름으로 되어 있는 것을 막기 위한 용도
				
	*/
	// ::	--> 범위 지정 연산자 (이름공간을 지정하는 연산자라고 생각)
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
}