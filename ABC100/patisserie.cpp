#include <iostream>
#include <vector>

using namespace std;

int get_sum(vector<int> v)
{
    int sum = 0;

    for(int i = 0; i < 3; i++)
    {
        if(v[i] >= 0){
            sum += v[i];
        }else{
            sum += v[i] * (-1);
        }
        
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

    int tops_sum = 0;
    for(int i = 0; i < 3; i++)
    {
        int max = 0;
        int idx;
        for(int j = 0; j < n; j++)
        {
            int sum = get_sum(params[j]);
        //cout << params[i][0] << params[i][1] << params[i][2] << endl;

            if(sum >= max)
                max = sum;
                idx = i;
        }
        cout << idx << endl;
        params.erase(params.begin() + idx);
        tops_sum += max;
    }
    cout << tops_sum << endl;
}
