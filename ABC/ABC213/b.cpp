#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, ai;
    vector<pair<int, int> > A;

    cin >> n;

    for(int i=0; i<n; ++i)
    {
        cin >> ai;
        A.push_back(make_pair(ai,i+1));
    }
    sort(A.begin(), A.end());
    cout << A[n-2].second << endl;
}
