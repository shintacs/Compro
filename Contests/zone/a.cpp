#include <iostream>

using namespace std;

int main()
{
    string s;
    int sum = 0;

    cin >> s;

    for(int i = 0; i < 12; i++)
    {
        if(s[i] == 'Z' && s[i+1] == 'O' && s[i+2] == 'N' && s[i+3] == 'e')
            sum++;
    }

    cout << sum << endl;
}
