#include <iostream>

using namespace std;

int main()
{
    int* v;
    int a;

    v = (int*) malloc(3 * sizeof(int));

    for(int i = 0; i < 3; i++)
    {
        cin >> a;
        v[i] = a;
    }

    int save;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 2; j > i; j--)
        {
            if(v[j] < v[j - 1])
            {
                save = v[j];
                v[j] = v[j - 1];
                v[j - 1] = save;
            }
        }
    }

    // cout << v[0] << " " << v[1] << " "<< v[2] << endl;

    cout << v[2] - v[1] + v[1] - v[0] << endl;
    free(v);
}
