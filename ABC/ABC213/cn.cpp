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
    sort(B.begin(), B.end());

    int preva, prevb, savea, saveb;
    preva = 0;
    savea = 0;
    prevb = 0;
    saveb = 0;
    rep(i, n)
    {
        if(preva < A[i].first && savea != A[i].first)
            preva++;
        savea = A[i].first;
        A[i].first = preva;
        if(prevb < B[i].first && saveb != B[i].first)
            prevb++;
        saveb = B[i].first;
        B[i].first = prevb;
    }
    vector<pair<int, int> > C, D;
    rep(i, n)
    {
        C.push_back(make_pair(A[i].second, A[i].first));
        D.push_back(make_pair(B[i].second, B[i].first));
    }
    sort(C.begin(), C.end()); 
    sort(D.begin(), D.end());
    rep(i, n)
    {
        cout << C[i].second << " " << D[i].second << endl;
    }
}
