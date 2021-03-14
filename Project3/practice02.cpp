#include <iostream>
#include <string>

using namespace std;

class Account {
	string name;
	int id;
	int balance;
public:
	Account(string n, int i, int bal);
	void deposit(int Amount);
	string getOwner() { return name; }
	int inquiry();
	int withdraw(int Amount);
};
Account::Account(string n, int i, int bal)
{
	name = n;
	id = i;
	balance = bal;
}
void Account::deposit(int Amount)
{
	balance += Amount;
}
int Account::inquiry()
{
	return balance;
}
int Account::withdraw(int Amount)
{
	if (Amount > balance) // 저축된 돈이 찾는 금액보다 작은 경우
	{
		Amount = balance;
		balance = 0; 
	}
	else
	{
		balance -= Amount;
	}
	return Amount; // 실제 찾은 금액 리턴 
}

int main()
{
	Account a("kitae", 1, 5000); // id 1번, 잔액 5000원, 이름이 kitae인 계좌 생성
	a.deposit(50000); // 50000원 입금 
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000); // 20000원 출금, withdraw()는 출금한 실제 금액 리턴 
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

}