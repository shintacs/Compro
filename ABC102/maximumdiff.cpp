#include <iostream>
#include <vector>

using namespace std;

long find_max(int n, vector<int> v)
{
    long max = 0;

    for(int i = 0; i < n; i++)
    {
        if(v[i] > max)
        {
            max = v[i];
        }
    }

    return max;
}

long find_min(int n, vector<int> v)
{
    long min = 1000000000;

    for(int i = 0; i < n; i++)
    {
        if(v[i] < min)
        {
            min = v[i];
        }
    }

    return min;
}

int main()
{
    int n, x;
    long min, max;

    vector<int> v;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    min = find_min(n, v);
    max = find_max(n, v);

    cout << max - min << endl;
}
