//テストケースのうち、２つだけWAが出てるが、原因がわからない
#include <iostream>
#include <vector>
#define rep(i,n) for(int i= 0; i<n; ++i)

using namespace std;

int smin_i, smin_j, tmin_i, tmin_j;

vector<vector<char>> rotate(vector<vector<char>> A, int N)
{
    vector<vector<char>> rot(N, vector<char>(N));
    rep(i,N)
    {
        rep(j, N)
        {
            rot[j][(N-1)-i] = A[i][j];
        }
    }
    smin_i=smin_j=N;
    rep(i, N)
    {
        rep(j, N)
        {
            if(rot[i][j] == '#')
            {
                smin_i = min(i, smin_i);
                smin_j = min(j, smin_j);
            }
        }
    }
    return rot;
}

int main()
{
    int N;
    cin >> N;
    vector<vector<char>> S(N, vector<char>(N));
    vector<vector<char>> T(N, vector<char>(N));
    smin_i=smin_j=tmin_i=tmin_j=N;
    rep(i,N)
    {
        rep(j,N)
        {
            cin >> S[i][j];
            if(S[i][j] == '#')
            {
                smin_i = min(i, smin_i);
                smin_j = min(j, smin_j);
            }
        }
    }
    rep(i,N)
    {
        rep(j,N)
        {
            cin >> T[i][j];
            if(T[i][j] == '#')
            {
                tmin_i = min(i, tmin_i);
                tmin_j = min(j, tmin_j);
            }
        }
    }

    bool fit;

    rep(r,4)
    {
        fit = true;
        rep(i, N-smin_i)
        {
            rep(j, N-smin_j)
            {
                if((tmin_i+i) < N && (tmin_j+j) < N && (smin_i+i) < N && (smin_j+j) < N)
                    if(S[smin_i+i][smin_j+j] != T[tmin_i+i][tmin_j+j])
                        fit = false;
            }
        }
        if(fit)
        {
            cout << "Yes" << endl;
            return 0;
        }
        else
        {
            S = rotate(S, N);
        }
    }
    cout << "No" << endl;    
}
