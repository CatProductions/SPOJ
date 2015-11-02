#include <iostream>
using namespace std;

int main()
{
	int t, l, c, i, j;
	for(cin >> t; t; t--)
	{
		cin >> l;
		cin >> c;
		for(i = 0; i < l; i++)
		{
			for(j = 0; j < c; j++)
			{
				if(i == 0 || i == l - 1 || j == 0 || j == c - 1)
					cout << '*';
				else
					cout << '.';
			}
			cout << '\n';
		}
	}
	return 0;
}
