// stock20.cpp -- augmented version
#include <iostream>
#include "stock.h"

// constructors
Stock::Stock()		// default constructor
{

	company_ = new char[8];
	strcpy(company_, "no name");
	shares_ = 0;
	share_val_ = 0.0;
	total_val_ = 0.0;
}

Stock::Stock(const char *co, long n, double pr)
{
	company_ = new char[strlen(co) + 1];
	strcpy(company_, co);
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative; "
			<< company_ << " shares set to 0.\n";
		shares_ = 0;
	}
	else
	{
		shares_ = n;
	}
	share_val_ = pr;
	set_tot();
}

Stock::Stock(const std::string &co, long n, double pr)
{
	company_ = new char[co.length() + 1];
	for (int i = 0; i < co.length() + 1; ++i)
		company_[i] = co[i];
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative; "
			<< company_ << " shares set to 0.\n";
		shares_ = 0;
	}
	else
	{
		shares_ = n;
	}
	share_val_ = pr;
	set_tot();
}

// class destructor
Stock::~Stock()		// quiet class destructor
{
	delete[] company_;
}
						// other methords
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares_ += num;
		share_val_ = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative. "
			<< "Transaction is abrted.\n";
	}
	else if (num > shares_)
	{
		cout << "You can't sell more than you have! "
			<< "Transaction is abrted.\n";
	}
	else
	{
		shares_ -= num;
		share_val_ = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	shares_ = price;
	set_tot();
}

std::ostream & operator<<(std::ostream &os, const Stock &s)
{
	using std::ios_base;
	// set format to #.###
	ios_base::fmtflags orig =
		os.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = os.precision(3);

	os << "Company: " << s.company_ << "  Shares: " << s.shares_ << std::endl;
	os << "  Share Price: $" << s.share_val_;
	// set format to #.##
	os.precision(2);
	os << "  Total Worth: $" << s.total_val_ << std::endl;

	// restore priginal format and original format
	os.setf(orig, ios_base::floatfield);
	os.precision(prec);
	return os;
}

const Stock & Stock::topval(const Stock &s) const
{
	if (s.total_val_ > total_val_)
		return s;
	else
		return *this;
}