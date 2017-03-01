// account.h -- Account class
#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>

class Account
{
private:
	std::string depositor_name_;	// 储户姓名
	std::string account_num_;		// 账号
	double deposit_;				// 存款额
public:
	Account();			// 默认构造函数
	Account(std::string, std::string, double = 0.0);
	~Account();
	void DispInfo();			// 显示账户信息
	void DepositMoney(double);		// 存入钱
	void RemoveMoney(double);		// 取出钱
};
#endif