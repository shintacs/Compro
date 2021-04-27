#include <iostream>
#include <vector>

using namespace std;

int abs(vector<int> v, int b, long n)//absの計算
{
    int sum = 0;
    int ans;

    for(int i = 0; i < n; i++)
    {
        ans = v[i] - b;
        if(ans >= 0)
        {
            sum += ans;
        }
        else
        {
            sum += -1 * ans;
        }
    }

    return sum;
}

vector<int> bubble(vector<int> v, long n)
{
    int temp;
    int i = 0;

    for(long i = 0; i < n; i++)
    {
        for(long j = n - 1; j > i; j--)
        {
            if(v[j] < v[j-1])
            {
                temp = v[j - 1];
                v[j - 1] = v[j];
                v[j] = temp;
            }
        }
    }

    return v;
}

int main()
{
    long n, a;
    vector<int> nums;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a - (i+1)); //入力の際に事前に減算する
    }

    vector<int> sorted_nums;
    int b, half;

    sorted_nums = bubble(nums, n);
    half = sorted_nums.size() / 2;
    if(sorted_nums.size() % 2 != 0)
    {
        b = sorted_nums[half - 1];
        cout << abs(nums, b, n) << endl;
    }
    else
    {
        int x, y;
        int mid;
        
        mid = (sorted_nums[half - 1] + sorted_nums[half]) / 2;

        x = abs(nums, mid, n);
        y = abs(nums, mid + 1, n);

        if(x < y)
        {
            cout << x << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
}