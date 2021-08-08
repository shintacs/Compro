#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i=0; i<n; ++i)

using namespace std;

int main()
{
    int h, w, n;
    vector<pair<int, int> > A, B;
    
    cin >> h >> w >> n;
    rep(i,n)
    {
        int ai, bi;
        cin >> ai >> bi;
        A.push_back(make_pair(ai, i+1));
        B.push_back(make_pair(bi, i+1));
    }
    sort(A.begin(), A.end());
    sort(A.begin(), B.end());

    int preva, prevb;
    preva = 0;
    prevb = 0;
    rep(i, n)
    {
        if(A[i].first != preva)
            A[i].first = preva+1;
        preva = A[i].first;
        if(B[i].first != prevb)
            B[i].first = prevb+1;
        prevb = B[i].first;
    }
    vector<pair<int, int> > C, D;
    rep(i, n)
    {
        C.push_back(make_pair(A[i].second, A[i].first));
        D.push_back(make_pair(B[i].second, B[i].first));
    }
    sort(C.begin(),C.end()); 
    sort(D.begin(), D.end());
    rep(i, n)
    {
        cout << C[i].second << " " << D[i].second << endl;
    }
}
