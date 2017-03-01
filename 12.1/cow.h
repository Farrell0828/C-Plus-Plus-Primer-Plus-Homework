// cow.h -- class Cow definition
#ifndef COW_H_
#define COW_H_
class Cow
{
private:
	char name_[20];
	char *hobby_;
	double weight_;
public:
	Cow();
	Cow(const char *nm, const char *ho, double wt);
	Cow(const Cow &c);
	~Cow();
	Cow & operator=(const Cow & c);
	void ShowCow() const;	// display all cow data
};
#endif