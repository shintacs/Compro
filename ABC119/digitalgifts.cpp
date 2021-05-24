#include <iostream>

using namespace std;

int main()
{
    int n;
    double xi, sum;
    string ui;

    cin >> n;
    sum = 0;

    for(int i=0; i<n; i++)
    {
        cin >> xi >> ui;
        if(ui == "JPY")
            sum += xi;
        else if(ui == "BTC")
            sum += xi*380000;
    }

    cout << sum << endl;

}