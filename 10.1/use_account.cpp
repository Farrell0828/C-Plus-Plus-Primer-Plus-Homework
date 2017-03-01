// use_account.cpp -- using class Account
#include <iostream>
#include "account.h"

int main()
{
	Account acc_a;
	Account acc_b =
	{
		"Farrell Meng",
		"622202 3202 4230 908",
		100000
	};

	acc_a.DispInfo();
	acc_b.DispInfo();

	acc_a = { "Yin Wang", "888888 8888 8888 888" };
	acc_a.DispInfo();

	acc_a.RemoveMoney(100);
	acc_a.DispInfo();
	acc_a.DepositMoney(-100);
	acc_a.DispInfo();
	acc_a.DepositMoney(500);
	acc_a.DispInfo();
	acc_a.RemoveMoney(100);
	acc_a.DispInfo();

	acc_b.RemoveMoney(100);
	acc_b.DispInfo();
	acc_b.DepositMoney(5000);
	acc_b.DispInfo();
	acc_b.RemoveMoney(8888);
	acc_b.DispInfo();

	return 0;
}