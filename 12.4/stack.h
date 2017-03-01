// stack.h -- class declaration for the stack ADT
typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10 };		// constant specific to class
	Item *pitems_;			// holds stack items
	int size_;				// number of elements in stack
	int top_;				// index for top stack item
public:
	Stack(int n = MAX);		// create stack with n elements
	Stack(const Stack &st);
	~Stack();
	bool IsEmpty() const;
	bool IsFull() const;
	// push() returns false if stack already is full, true otherwise
	bool Push(const Item &item);	// add item to stack
	// pop() returns false if stack already is empty, true otherwise
	bool Pop(Item &item);	// pop top into item
	Stack & operator=(const Stack &st);
};