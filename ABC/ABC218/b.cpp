#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> P;
    char alph[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for(int i=0; i<26; ++i)
    {
        int x;
        cin >> x;
        P.push_back(x);
    }
    for(int i=0; i<26; ++i)
    {
        cout << alph[P[i]-1];
    }
    cout << endl;
}