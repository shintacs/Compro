#include <iostream>

using namespace std;

int main()
{
    string s;

    cin >> s;

    s.replace(5, 1, " ");
    s.replace(13, 1, " ");
    cout << s << endl;
}