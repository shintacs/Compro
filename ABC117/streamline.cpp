#include <iostream>
#include <random>
#include <vector>
#include <algorithm>

using namespace std;

void swap(int* A, int* B)
{
    int t = *A;
    *A = *B;
    *B = t;
}

int partition(int *X, int l, int r)
{
    int pivot = X[r];
    int i = l-1;

    for(int j=l; j<=r-1; j++)
    {
        if(X[j]<=pivot)
        {
            i++;
            swap(&X[i], &X[j]);
        }
    }
    swap(&X[i+1], &X[r]);
    return(i+1);
}

void quicksort(int *X, int l, int r)
{
    if(l<r)
    {
        int pivot = partition(X, l, r);
        quicksort(X, l, pivot-1);
        quicksort(X, pivot+1, r);
    }
}

int main()
{
    int n, m, x;

    cin >> n >> m;
    vector<int> X;

    for(int i=0; i<m; i++)
    {
        cin >> x;
        X.push_back(x);
    }

    mt19937_64 v;
    shuffle(X.begin(), X.end(), v);

    quicksort(X, 0, m-1);
    
    int Xd[m-1];
    for(int i=1; i<m; i++)
    {
        Xd[i-1] = X[i]-X[i-1];
    }

    quicksort(Xd, 0, m-2);

    int sum=0;
    for(int i=0; i<m-n; i++)
    {
        sum+=Xd[i];
    }
    
    cout << sum << endl;
}
