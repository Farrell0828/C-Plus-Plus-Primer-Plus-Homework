// plorg.h -- class Plorg
#ifndef PLORG_H_
#define PLORG_H_
class Plorg
{
private:
	enum { Len = 20 };
	char name_[Len];
	int ci_;
public:
	Plorg();			// default constructor
	Plorg(char *, int);	// construtor
	~Plorg();
	void SetCi(int);
	void ShowPlorg() const;
};
#endif