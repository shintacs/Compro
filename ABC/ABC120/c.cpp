#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    string sf, sb;
    int num0, num1, i;
    
    cin >> s; 
    num0 = num1 = 0;

    i=0;
    while(s[i] != '\0')
    {
        if(s[i] == '0')
        {
            num0++;
        }
        else
        {
            num1++;
        }
        i++;
    }

    if(num0 > num1)
        cout << num1*2 << endl;
    else
        cout << num0*2 << endl;
}