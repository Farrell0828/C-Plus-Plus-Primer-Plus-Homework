// account.h -- Account class
#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>

class Account
{
private:
	std::string depositor_name_;	// ��������
	std::string account_num_;		// �˺�
	double deposit_;				// ����
public:
	Account();			// Ĭ�Ϲ��캯��
	Account(std::string, std::string, double = 0.0);
	~Account();
	void DispInfo();			// ��ʾ�˻���Ϣ
	void DepositMoney(double);		// ����Ǯ
	void RemoveMoney(double);		// ȡ��Ǯ
};
#endif