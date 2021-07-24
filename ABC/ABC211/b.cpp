#include <iostream>

using namespace std;

int main()
{
    string s;
    int ss[4]={0};

    for(int i=0; i<4; i++)
    {
        cin >> s;
        if(s == "H")
            ss[0] = ss[0]+1;
        else if(s == "2B")
            ss[1] = ss[1]+1;
        else if(s == "3B")
            ss[2] = ss[2]+1;
        else if(s == "HR")
            ss[3] = ss[3]+1;
        else
            ;
    }
    for(int i=0; i<4; i++)
    {
        if(ss[i] != 1)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
