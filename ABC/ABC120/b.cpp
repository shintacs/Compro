#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, k;
    vector<int> A;
    vector<int> AB;

    cin >> a >> b >> k;

    for(int i=1; i<=a; i++)
    {
        if(a%i == 0)
        {
            A.push_back(a/i);
        }
    }
    sort(A.begin(), A.end());

    for(int i=1; i<=b; i++)
    {
        if(b%i == 0)
        {
            int j = 0;
            while(A[j] != '\0')
            {
                if(A[j] == b/i)
                {
                    AB.push_back(b/i);
                    // cout << b/i << endl;
                    break;
                }
                j++;
            }
        }
    }

    cout << AB[k-1] << endl;
}