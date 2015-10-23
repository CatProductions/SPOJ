#include <iostream>
#include <string>
using namespace std;

void kittypattern(string wort, int n)
{
	int i, j, k, m;
	char a;
	for(i = 0; wort[i] != '\0'; i++)
	{
		for(j = n; j; j--)
			cout << wort;
		cout << "\n";
		a = wort[0];
		for(m = 0; wort[m] != '\0'; m++)
			wort[m] = wort[m + 1];
		wort[m - 1] = a;
	}
}

int main()
{
	int n, l;
	string wort;
	while(true)
	{
		cin >> wort;
		if (wort[0] == '.' && wort[1] == '\0')
		{
			return 0;
		}
		else
		{
			cin >> n;
			kittypattern(wort, n);
		}
	}
}
