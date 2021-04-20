#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> s;
    char ss;
    int num = 0;

    for(int i = 0; i < 4; i++)
    {
        cin >> ss;
        s.push_back(ss);
    }

    for(int i = 0; i < 4; i++)
    {
        if(s[i] == '+')
        {
            num++;
        }
        else
        {
            num--;
        }
    }

    cout << num << endl;
}
