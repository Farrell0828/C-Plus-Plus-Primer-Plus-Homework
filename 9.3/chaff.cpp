// chaff.cpp -- using placement new
#include <iostream>
#include <new>

int const Size = 2;
int const Len = 20;
int const BUF = 512;
struct chaff
{
	char dross[Len];
	int slag;
};
char buffer[BUF];
void set(chaff &);
void show(const chaff &);

int main()
{
	chaff *pc = new (buffer) chaff[Size];
	for (int i = 0; i < Size; ++i)
	{
		std::cout << "#" << i + 1 << std::endl;
		set(pc[i]);
		std::cout << std::endl;
	}

	for (int i = 0; i < Size; ++i)
		show(pc[i]);
	return 0;
}

void set(chaff & cf)
{
	std::cout << "Enter the dross: ";
	std::cin.getline(cf.dross, Len);
	std::cout << "Enter the slag: ";
	std::cin >> cf.slag;
	std::cin.get();
}

void show(const chaff & cf)
{
	std::cout << "Dross: " << cf.dross << std::endl;
	std::cout << "Slag: " << cf.slag << std::endl;
}