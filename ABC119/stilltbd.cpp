#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int m, d;

    cin >> s;

    m = (s[5]-'0')*10+s[6]-'0';
    d = (s[8]-'0')*10+s[9]-'0';

    if(m < 4)
    {
        cout << "Heisei" << endl;
        return 0;
    }
    else if(m == 4)
    {
        if(d <= 30)
        {
            cout << "Heisei" << endl; 
            return 0;
        }
    }

    cout << "TBD" << endl;
}
