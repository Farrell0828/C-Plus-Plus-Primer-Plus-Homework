// stick20.h -- augmented version
#ifndef STOCK_H_
#define STOCk_H_
#include <iostream>

class Stock
{
private:
	char *company_;
	int shares_;
	double share_val_;
	double total_val_;
	void set_tot() { total_val_ = shares_ * share_val_; }
public:
	Stock();		// default constructor
	Stock(const char *co, long n = 0, double pr = 0.0);
	Stock(const std::string &co, long n = 0, double pr = 0.0);
	~Stock();		// do-nothing destructor
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	friend std::ostream & operator<<(std::ostream &os, const Stock &s);
	const Stock &topval(const Stock &s) const;
};
#endif	// STOCK_H_