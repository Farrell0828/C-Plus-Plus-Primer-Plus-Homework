// account.cpp -- Account menber functions
#include <iostream>
#include "account.h"

// Ĭ�Ϲ��캯��
Account::Account()
{
	depositor_name_ = "NoName";
	account_num_ = "Null";
	deposit_ = 0;
}

// ���캯��
Account::Account(std::string depositor_name, std::string account_num, double deposit)
{
	depositor_name_ = depositor_name;
	account_num_ = account_num;
	deposit_ = deposit;
}

// ��������
Account::~Account() {}

// ��ʾ�˻���Ϣ����
void Account::DispInfo()
{
	using std::cout;
	using std::endl;
	cout << "�˻���Ϣ���£�" << endl;
	cout << "  Depositor Name: " << depositor_name_ << endl;
	cout << "  Account Number: " << account_num_ << endl;
	cout << "  Deposit: " << deposit_ << endl;
	cout << endl;
}

// ����Ǯ����
void Account::DepositMoney(double amount)
{
	if (amount < 0)
	{
		std::cout << "����ʧ�ܣ�����Ľ����Ǹ�����" << std::endl;
	}
	else
	{
		deposit_ = deposit_ + amount;
		std::cout << "�����ɹ���" << std::endl;
	}
	
}

// ȡ��Ǯ����
void Account::RemoveMoney(double amount)
{
	if (amount < 0)
	{
		std::cout << "����ʧ�ܣ�ȡ������Ϊ������" << std::endl;
	}
	else if (amount > deposit_)
	{
		std::cout << "����ʧ�ܣ������˻���" << std::endl;
	}
	else
	{
		deposit_ = deposit_ - amount;
		std::cout << "�����ɹ���" << std::endl;
	}
}