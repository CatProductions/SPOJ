#include <iostream>
using namespace std;


int getNumber();

int main()
{
    int a = getNumber();
    int b = getNumber();
    int answer = a+b;

    cout << answer;

    return 0;
}


int getNumber()
{

    int x;

    while(true)
    {
        cin >> x;

        if(x>0 and x<201)
        {
            break;
        }
    }
    return x;
}
