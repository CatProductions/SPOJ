#include <iostream>

using namespace std;

// Print one word: Wo...ow (letter o must be repeted x times).

int main()
{
    int x;

    while(true)
        {
            cin >> x;

            if(x>0 && x<50)
                {
                    break;
                }
        }

    cout << "W";

    for(int i=0; i<x ; i++)
        {
            cout << "o";
        }

    cout << "w";

    return 0;
}
