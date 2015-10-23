#include <iostream>
using namespace std;

int step(int x, int y)
{
	int n;
	if(x == y)
		n = x*2 - x%2;
	else
		n = x*2 - 2 - x%2;
	return n;
}

bool check(int x, int y)
{
	if(x == y || x == y + 2)
		return true;
	else
	{
		cout << "No Number\n";
		return false;
	}
}

int main()
{
	int x, y, i;
	for(cin >> i; i; i--)
	{
		cin >> x;
		cin >> y;
		if(check(x, y))
			cout << step(x, y) << "\n";
	}
	return 0;
}
