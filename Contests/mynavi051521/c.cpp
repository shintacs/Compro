#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool judge(string str, char* S)
{
    for(int i=0; i<10; i++)
    {
        int cnt=0;
        for(int j=0; j<4; j++)
        {
            if(str[j] == '0'+i)
            {
                cnt++;
            }
        }

        if(S[i] == 'o' && cnt<1)
        {
            return false;
        }
        else if(S[i] == 'x' && cnt>0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    char S[10];
    int ans;

    cin >> s;
    ans = 0;

    for(int i=0; i<10; i++)
    {
        S[i] = s[i];
    }

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            for(int k=0; k<10; k++)
            {
                for(int l=0; l<10; l++)
                {
                    string str = to_string(i) + to_string(j) + to_string(k) + to_string(l);
                    if(judge(str, S))
                        ans++;
                }
            }
        }
    }

    cout << ans << endl;
}
