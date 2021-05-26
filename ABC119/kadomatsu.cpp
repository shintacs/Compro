#include <iostream>

using namespace std;

int main()
{
    int n, alf, li, mp;
    int ABC[3];
    
    cin >> n;

    for(int i=0; i<3; i++)
    {
        cin >> alf;
        ABC[i] = alf;
    }
    mp = 0;
    int L[n];

    for(int i=0; i<n; i++)
    {
        cin >> li;
        if(li==ABC[0] || li==ABC[1] || li==ABC[2])
            li=0;

        L[i] = li;
    }

    int num=0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(L[j]-ABC[2-i] <= 10)
            {
                
            }
        }
    }

}