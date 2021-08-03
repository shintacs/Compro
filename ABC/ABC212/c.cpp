#include <iostream>

using namespace std;

int main()
{ 
    string s;
    bool next, same;
    cin >> s;
    next = same = true;

    for(int i=1; i<4; ++i)
    {
        if(s[i] != s[i-1])
            same = false;
        if(s[i] != s[i-1]+1)
            if((s[i-1] - s[i]) == 9 && next)
                next = true;
            else
                next = false;
    }
    if(same || next)
        cout << "Weak" << endl;
    else
        cout << "Strong" << endl;
}
