// golf.h -- class Golf
#ifndef GOLF_H_
#define GOLT_H_

class Golf
{
private:
	static const int Len = 40;
	char full_name_[Len];
	int handicap_;
public:
	Golf();						// default constructor
	Golf(const char *, int);	// constructor
	int SetGolf();
	void ShowGolf() const;
	void SetHandicap(int);
	int GetHandicap() { return handicap_; }
};
#endif