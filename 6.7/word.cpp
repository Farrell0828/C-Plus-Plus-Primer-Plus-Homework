// word.cpp -- what the word begin with
#include <iostream>
#include <cctype>
#include <string>
int main()
{
	using namespace std;
	cout << "Enter words (q to quit):\n";
	string word;
	int vowels = 0;
	int consonants = 0;
	int others = 0;
	while ((cin >> word) && (word != "q"))
	{
		if (isalpha(word[0]))
			switch (word[0])
			{
			case 'a':
			case 'A':
			case 'o':
			case 'O':
			case 'e':
			case 'E':
			case 'u':
			case 'U': vowels++; break;
			default: consonants++;
			}
		else
			others++;
	}
	cout << vowels << " words beginning with vowels\n";
	cout << consonants << " words beginning with consonants\n";
	cout << others << " others\n";
	return 0;
}