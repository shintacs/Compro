#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    if(S[N-1] == 'o')
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
