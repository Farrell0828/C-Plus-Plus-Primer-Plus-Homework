// account.cpp -- Account menber functions
#include <iostream>
#include "account.h"

// 默认构造函数
Account::Account()
{
	depositor_name_ = "NoName";
	account_num_ = "Null";
	deposit_ = 0;
}

// 构造函数
Account::Account(std::string depositor_name, std::string account_num, double deposit)
{
	depositor_name_ = depositor_name;
	account_num_ = account_num;
	deposit_ = deposit;
}

// 析构函数
Account::~Account() {}

// 显示账户信息方法
void Account::DispInfo()
{
	using std::cout;
	using std::endl;
	cout << "账户信息如下：" << endl;
	cout << "  Depositor Name: " << depositor_name_ << endl;
	cout << "  Account Number: " << account_num_ << endl;
	cout << "  Deposit: " << deposit_ << endl;
	cout << endl;
}

// 存入钱方法
void Account::DepositMoney(double amount)
{
	if (amount < 0)
	{
		std::cout << "操作失败！存入的金额不能是负数。" << std::endl;
	}
	else
	{
		deposit_ = deposit_ + amount;
		std::cout << "操作成功！" << std::endl;
	}
	
}

// 取出钱方法
void Account::RemoveMoney(double amount)
{
	if (amount < 0)
	{
		std::cout << "操作失败！取出金额不能为负数。" << std::endl;
	}
	else if (amount > deposit_)
	{
		std::cout << "操作失败！超出账户余额。" << std::endl;
	}
	else
	{
		deposit_ = deposit_ - amount;
		std::cout << "操作成功！" << std::endl;
	}
}