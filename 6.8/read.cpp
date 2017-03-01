// read.cpp -- read a fild and output how many char
#include <iostream>
#include <fstream>
int main()
{
	using namespace std;
	ifstream fin;
	fin.open("in.txt");
	char ch;
	int count = 0;
	while (fin.get(ch))
	{
		count++;
	}
	cout << "There are " << count << " char all.\n";
	return 0;
}