#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    long long k;
    long long ai, bi;
    vector<pair<long long, long long> > AB;

    cin >> n >> k;

    for(int i=0; i<n; i++)
    {
        cin >> ai >> bi;
        pair<long long, long long> p = make_pair(ai, bi);
        AB.push_back(p);
    }

    std::sort(AB.begin(), AB.end());

    long long pos = 0;
    long long dist = 0;
    while(k > 0)
    {
        dist += k; 
        k = 0;
        while(pos < AB.size() && AB.at(pos).first <= dist)
        {
            k += AB.at(pos).second;
            pos++;
        }
    }

    cout << dist << endl;
    
}
