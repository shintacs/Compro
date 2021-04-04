#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int num_ppl;    //N
    int a;          //A
    vector<int> ppl;

    cin >> num_ppl;

    for(int i = 0; i < num_ppl; i++)
    {
        cin >> a;
        if(num_ppl % 2 == 0)
        {
            if(a % 2 == 0)
            {
                cout << 0 << endl;
                return 0;
            }
        }
        else
        {
            if(a % 2 == 1)
            {
                cout << 0 << endl;
                return 0;
            }
        }

        if(a >= num_ppl){
            cout << 0 << endl;
            return 0;
        }
        ppl.push_back(a);

    }

    int num = 0;
    while(num < num_ppl)
    {
        int x = 0;

        for(int i = 0; i < num_ppl; i++)
        {
            if(ppl[i] == num)
            {
                x++;
            }
        }

        if(x >= 3 || (num == 0 && x > 1))
        {
            cout << 0 << endl;
            return 0;
        }
        num++;
    }

    long x = pow(10, 9) + 7;
    int ans = pow(2, ppl.size() / 2);
    cout << ans % x << endl;
}

//10AC1WA3TLE
