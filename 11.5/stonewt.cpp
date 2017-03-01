// stonewt.cpp -- Stonewt methods
#include <iostream>
#include "stonewt.h"
using std::cout;

// constructor Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
	stone_ = int(lbs) / Lbs_per_stn;
	pds_left_ = lbs - stone_ * Lbs_per_stn;
	pounds_ = lbs;
	mode_ = STONE;
}

// constructor Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
	stone_ = stn;
	pds_left_ = lbs;
	pounds_ = stn * Lbs_per_stn + lbs;
	mode_ = STONE;
}

// default constructor
Stonewt::Stonewt()
{
	stone_ = pds_left_ = pounds_ = 0;
	mode_ = STONE;
}

// destructor
Stonewt::~Stonewt() {}

// overload
Stonewt Stonewt::operator+(const Stonewt &wt) const
{
	return Stonewt(pounds_ + wt.pounds_);
}

Stonewt Stonewt::operator-(const Stonewt &wt) const
{
	return Stonewt(pounds_ - wt.pounds_);
}

Stonewt Stonewt::operator*(double n) const
{
	return Stonewt(pounds_ * n);
}

Stonewt operator*(double n, const Stonewt &wt)
{
	return wt * n;
}

std::ostream & operator<<(std::ostream &os, const Stonewt &wt)
{
	if (wt.mode_ == Stonewt::STONE)
		cout << wt.stone_ << " stone, " << wt.pds_left_ << " pounds\n";
	else if (wt.mode_ == Stonewt::POUND_D)
		cout << int(wt.pounds_ + 0.5) << " pounds\n";
	else if (wt.mode_ == Stonewt::POUND_F)
		cout << wt.pounds_ << " pounds\n";
	else
		cout << "Stonewt object mode is invalid\n";
	return os;
}