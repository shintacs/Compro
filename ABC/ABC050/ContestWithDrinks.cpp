#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num_prob;
    vector<int> times_solve;
    int t_sum = 0;

    int num_drink;

    int d_num_prob;
    vector<int> d_sum;

    cin >> num_prob;    //N
    for(int i = 0; i < num_prob; i++)
    {
        int t;
        cin >> t;   //Ti
        times_solve.push_back(t);
        t_sum += t;
    }

    cin >> num_drink;

    for(int i = 0; i < num_drink; i++)
    {
        int p;  //P
        int x;  //X
        cin >> p >> x;
        d_sum.push_back(t_sum - (times_solve[p-1] - x));
    }

    for(int i = 0; i < d_sum.size(); i++)
    {
        cout << d_sum[i] << endl;
    }
}
