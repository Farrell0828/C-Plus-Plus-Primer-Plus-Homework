// arrstr.cpp -- function with array and struct
#include <iostream>
using namespace std;
const int Slen = 30;
struct student
{
	char fullname[Slen];
	char hobby[Slen];
	int opplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done\n";
	return 0;
}

int getinfo(student pa[], int n)
{
	cout << "Enter students' information, %q to quit.\n";
	cout << "The limit is " << n << endl;
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "#" << i + 1 << ":\n";
		cout << "Fullname: ";
		cin.getline(pa[i].fullname, Slen);
		if (pa[i].fullname == "%q")
			break;
		cout << "Hobby: ";
		cin >> pa[i].hobby;
		cout << "Ooplevel: ";
		while (!(cin >> pa[i].opplevel))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Please enter an integer: ";
		}
		cout << endl;
		cin.get();
	}
	return i;
}

void display1(student st)
{
	cout << "Fullname: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "Ooplevel: " << st.opplevel << endl;
	cout << endl;
}

void display2(const student * ps)
{
	cout << "Fullname: " << ps->fullname << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "Ooplevel: " << ps->opplevel << endl;
	cout << endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "#" << i + 1 << endl;
		cout << "Fullname: " << pa[i].fullname << endl;
		cout << "Hobby: " << pa[i].hobby << endl;
		cout << "Ooplevel: " << pa[i].opplevel << endl;
		cout << endl;
	}
}