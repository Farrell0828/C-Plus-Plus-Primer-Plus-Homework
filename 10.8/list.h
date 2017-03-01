#ifndef LIST_H_
#define LIST_H_
typedef int Item;
class List
{
private:
	enum { Max = 10 };
	Item ar_[Max];
	int top_;
public:
	List();
	bool IsEmpty();
	bool IsFull();
	bool Add(const Item &);
	void Visit(void(*pf)(Item &));
};
#endif