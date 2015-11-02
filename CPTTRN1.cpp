#include <iostream>

using namespace std;

void printPattern(int columns, int lines);

int main()
{
    int t;

    while(true)
    {
        cin >> t;
        if(t>0 && t<100)
        {
            break;
        }
    }

    for(int i=0; i<t; i++)
    {
        int columns, lines;

        while(true)
        {
            cin >> lines >> columns;

            if(columns<100 && lines<100)
            {
                break;
            }
        }

        printPattern(columns, lines);
        cout << endl;
    }

    return 0;
}

void printPattern(int columns, int lines)
{
    for(int j=0; j<lines; j++)
    {
        for(int k=0; k<columns; k++)

            if((j+k)%2==0)
        {
            cout << "*";
        }

            else
        {
                cout<< ".";
        }

        cout << endl;
    }
}
