#include <iostream>

using namespace std;

int main()
{
    int s_h, s_w, h, w;

    cin >> h >> w;
    cin >> s_h >> s_w;

    cout << (h-s_h)*(w-s_w) << endl;
}
