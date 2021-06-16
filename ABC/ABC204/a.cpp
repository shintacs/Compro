#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    if(x == y)
    {
        cout << x << endl;
    }
    else if(x == 0)
    {
        if(y == 1)
            cout << 2 << endl;
        if(y == 2)
            cout << 1 << endl;
    }
    else if(x == 1)
    {
        if(y == 0)
        {
            cout << 2 << endl;
        }
        if(y == 2)
        {
            cout << 0 << endl;
        }
    }
    else if(x == 2)
    {
        if(y == 0)
        {
            cout << 1 << endl;
        }
        if(y == 1)
        {
            cout << 0 << endl;
        }
    }
}
