#include <iostream>

using namespace std;

int main()
{
    int a, b;
    string op;

    cin >> a;
    cin >> op;
    cin >> b;

    if(op == "+")
    {
        cout << a + b << endl;
    }
    else if(op == "-")
    {
        cout << a - b << endl;
    }
}
