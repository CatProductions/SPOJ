#include <iostream>

using namespace std;

// Exclusive OR

int main()
{
    int p, q;

    while(true)
    {
        cin >> p >> q;

        if(p==0 && q==1 || q==0 && p==1)
        {
            cout << 1 << endl;
            break;
        }

        else if(p==0 && q==0 || p==1 && q==1)
        {
            cout << 0 << endl;
            break;
        }
    }
    return 0;
}
