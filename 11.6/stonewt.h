// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
private:
	enum Mode { STONE, POUND_D, POUND_F };
	const static int Lbs_per_stn = 14;
	int stone_;
	double pds_left_;
	double pounds_;
	Mode mode_;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	void StoneMode() { mode_ = STONE; }
	void PoundFMode() { mode_ = POUND_F; }
	void PoundDMode() { mode_ = POUND_D; }
	Stonewt operator+(const Stonewt &wt) const;
	Stonewt operator-(const Stonewt &wt) const;
	Stonewt operator*(double n) const;
	bool operator<(const Stonewt &wt) const;
	bool operator<=(const Stonewt &wt) const;
	bool operator==(const Stonewt &wt) const;
	bool operator>=(const Stonewt &wt) const;
	bool operator>(const Stonewt &wt) const;
	bool operator!=(const Stonewt &wt) const;
	friend Stonewt operator*(double n, const Stonewt &wt);
	friend std::ostream & operator<<(std::ostream &os, const Stonewt &wt);
};
#endif