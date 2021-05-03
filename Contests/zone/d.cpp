#include <iostream>

using namespace std;

/*long length(string t)
{
    long i = 0;

    while(t[i] != '\0')
    {
        i++;
    }

    return i;
}*/

string rotate(string t)
{
    long len = t.length();
    char save;

    for(long i = 0; i < len; i++)
    {
        save = t[i];
        t[i] = t[(len-1)- i];
        t[(len-1) - i] = save;
    }

    return t;
}

string decrypt(string s)
{
    string t;
    long ti = 0;
    long len = s.length();
    // char* t;
    // t = (char*) malloc(sizeof(char));

    for(int i = 0; i < len; i++)
    {
        if(s[i] == 'R')
        {
            t = rotate(t);
        }
        else if(t[ti] == t[ti-1] && t[ti] != ' ' && t[ti-1] != ' ')
        {
            t[ti] = ' ';
            t[ti-1] = ' ';
            ti -= 2;
        }
        else
        {
            t += s[i];
            ti++;
        }
    }

    return t;
}

int main()
{
    string s;
    cin >> s;

    cout << decrypt(s) << endl;
}