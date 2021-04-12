#include <iostream>

using namespace std;

int main()
{
    int d, n;
    int ns;
    int add = 1;

    cin >> d >> n;
    ns = n;

    for(int i = 0; i < d; i++){
        n *= 100;
    }

    if(ns == 100){
        for(int i = 0; i < d; i++){
            add *= 100;
        }
        n += add;
    }

    cout << n << endl;
}
