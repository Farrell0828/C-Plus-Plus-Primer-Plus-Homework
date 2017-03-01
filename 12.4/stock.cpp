// stock.cpp -- class Stack methods
#include "stack.h"

Stack::Stack(int n)
{
	size_ = n;
	pitems_ = new Item[size_];
	top_ = -1;
}

Stack::Stack(const Stack &st)
{
	pitems_ = new Item[st.size_];
	size_ = st.size_;
	for (int i = 0; i < size_; ++i)
		pitems_[i] = st.pitems_[i];
	top_ = st.top_;
}

Stack::~Stack()
{
	delete[] pitems_;
}

bool Stack::IsEmpty() const
{
	return (top_ == -1);
}

bool Stack::IsFull() const
{
	return (top_ == size_ - 1);
}

bool Stack::Push(const Item &item)
{
	if (IsFull())
	{
		return false;
	}
	else
	{
		++top_;
		pitems_[top_] = item;
		return true;
	}
}

bool Stack::Pop(Item &item)
{
	if (IsEmpty())
	{
		return true;
	}
	else
	{
		item = pitems_[top_];
		--top_;
		return true;
	}
}

Stack & Stack::operator=(const Stack &st)
{
	if (this == &st)
		return *this;
	delete[] pitems_;
	size_ = st.size_;
	pitems_ = new Item[size_];
	for (int i = 0; i < size_; ++i)
		pitems_[i] = st.pitems_[i];
	top_ = st.top_;
	return *this;
}