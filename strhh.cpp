#include <iostream>
#include <string>
using namespace std;

void pesuth(string word);

int main()
{
	int i, l;
	string word;
	for(cin >> i; i; i--)
	{
		cin >> word;
		pesuth(word);
	}
	return 0;
}

void pesuth(string word)
{
	int i;
	for(i = 0; i < word.length() / 2; i = i+2)
		cout << word[i];
	cout << "\n";
}
