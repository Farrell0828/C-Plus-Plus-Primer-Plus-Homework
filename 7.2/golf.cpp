// golf.cpp -- get golf's scores
#include <iostream>
const int Max = 10;
int get_scores(double *);
void display(const double *, int);
double mean(const double *, int);

int main()
{
	using namespace std;
	double scores[Max];
	int num = get_scores(scores);
	display(scores, num);
	cout << "\nThe mean of scores is: " << mean(scores, num) << endl;
	return 0;
}

int get_scores(double scores[])
{
	using namespace std;
	cout << "Please enter your scores, the limit of number is "
		 << Max << ", q to end." << endl;
	int i;
	for (i = 0; i < Max; i++)
	{
		cout << "#" << i + 1 << ": ";
		if (cin >> scores[i])
			continue;
		else
			break;
	}
	return i;
}

void display(const double * scores, int num)
{
	using namespace std;
	cout << "The scores you enter are:\n";
	for (int i = 0; i < num; i++)
	{
		cout << scores[i] << " ";
	}
}

double mean(const double * scores, int num)
{
	double total = 0;
	for (int i = 0; i < num; i++)
		total += scores[i];
	return total / num;
}