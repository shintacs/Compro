//未完成（char*型ではなく、string型等を用いないと、文字列比較ができない。
#include <iostream>

using namespace std;

int lenght(char* str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

int main()
{
    char *s;
    char *t;
    char save;
    int len;

    s = (char*) malloc(sizeof(char));
    t = (char*) malloc(sizeof(char));

    cin >> s;
    cin >> t;

    len = lenght(s);

    for(int i = 0; i < len; i++)
    {
        if(s == t)
        {
            cout << "Yes" << endl;
            return 0;
        }

        save = s[len - 1];
        for(int j = len-1; j > 0; j--)
        {
            s[j] = s[j - 1];
        }
        s[0] = save;

        cout << s  << " " << t << endl;

        cout << s[0] << s[1] << s[2] << s[3] << s[4] << endl;
    }

    free(s);
    free(t);

    cout << "No" << endl;
}
