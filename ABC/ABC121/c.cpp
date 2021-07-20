#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    long long ai;
    int bi;
    vector<pair<long long, int> >AB;

    cin >> n >> m;
    
    for(int i=0; i<n; i++)
    {
        cin >> ai >> bi;
        AB.push_back(make_pair(ai, bi));
    }

    sort(AB.begin(), AB.end());

    int m_left;
    long long money;

    m_left = m;
    money = 0;
    int i = 0;
    while(m_left != 0)
    {
        if(m_left - AB[i].second >= 0)
        {
            money += AB[i].first * AB[i].second;
            m_left -= AB[i].second;
        }
        else
        {
            money += m_left*AB[i].first;
            m_left = 0;
        }
        i++;
    }

    cout << money << endl;
}