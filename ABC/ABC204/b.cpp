#include <iostream>

using namespace std;

int main()
{
    int n, ai, sum;

    cin >> n;
    sum = 0;

    for(int i=0; i<n; i++)
    {
        cin >> ai;
        if(ai > 10)
        {
            sum += ai-10;
        }
    }
    
    cout << sum << endl;
}
