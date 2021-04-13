#include <iostream>
#include <vector>

using namespace std;

int get_sum(vector<int> v)
{
    int sum = 0;

    for(int i = 0; i < 3; i++)
    {
        sum += v[i];
    }

    return sum;
}

int main()
{
    int n; //kinds of cakes
    int m; //cakes he eats
    vector< vector<int> > params;  //paramaters of cakes

    cin >> n >> m;

    int param;
    for(int i = 0; i < n; i++)
    {
        vector<int> v;

        for(int j = 0; j < 3; j++)
        {
            cin >> param;
            v.push_back(param);
        }
        params.push_back(v);
    }

    int max = 0;
    for(int i = 0; i < n; i++)
    {
        int sum = get_sum(params[i]);
        cout << params[i][0] << params[i][1] << params[i][2] << endl;

        if(sum > max)
            max = sum;
            cout << max << endl;
    }
    cout << max << endl;
}