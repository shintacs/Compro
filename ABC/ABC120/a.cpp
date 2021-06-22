#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int i=0;
    while(i < c)
    {
        b -= a;
        if(b < 0)
        {
            break;
        }
        i++;
    }

    cout << i << endl;
}
