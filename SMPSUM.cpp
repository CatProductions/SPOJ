#include <iostream>

using namespace std;

// Computed sum: a*a + (a+1)*(a+1) + ... + (b-1)*(b-1) + b*b

int main()
{
    int a,b,i;

    int sum = 0;


    while(true)
    {
        cin >>a>>b;

        if(0<a && a<=b && b<100)
        {
            break;
        }
    }

    for(i=a ; i<b+1; i++)
    {
        sum = sum + i*i;
    }

    cout << sum << endl;

    return 0;
}
