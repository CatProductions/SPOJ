#include <iostream>
using namespace std;

int main()
{
	int i;
	while(true)
	{
		cin >> i;
		if(i == 42)
			return 0;
		else
			cout << i << "\n";
	}
}
