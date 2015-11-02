#include <iostream>

using namespace std;

void divisorsFinder(int n, int x, int y);

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
    
    for(int i=0; i<t ; i++)
        {
            int n, x, y;
            
            while(true)
            {
                cin >> n >> x >> y;
                
                if(n>x && x%y!=0 && n<100000)
                {
                    break;
                }
            }
            
            divisorsFinder(n,x,y);
        }
    return 0;
}

void divisorsFinder(int n, int x, int y)
{
    for(int j=2; j<n; j++)
    {
        if(j%x==0 && j%y!=0)
        {
            cout << j << " ";
        }
    }
    cout << endl;
}
