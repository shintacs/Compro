#include <iostream>

using namespace std;

void judge(int a, int b, int c)
{
    if(a > b)
        cout << ">" << endl;
    else if(a == b)
        cout << "=" << endl;
    else
        cout << "<" << endl;
}

void pow(int a, int b, int c)
{
    if(a >= 0)
    {
        if(b >= 0)
        {
            judge(a, b, c);
        }
        else
        {
            if(c%2 == 0)
                judge(a, -b, c);
            else
                cout << ">" << endl;
        }
    }
    else
    {
        if(b < 0)
            if(c%2 == 0)
                judge(-a, -b, c);
            else
                judge(-b, -a, c);
        else
        {
            if(c%2 == 0)
                judge(-a, b, c);
            else
                cout << "<" << endl;
        }
    }
}

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    pow(a, b, c);
}