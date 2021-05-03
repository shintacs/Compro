#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    long  ai, bi, ci, di, ei;
    long  ma, mb, mc, md, me;
    // vector< vector<long> > params;

    cin >> n;
    ma = mb = mc = md = me = 0;

    for(int i = 0; i < n; i++)
    {   
        cin >> ai >> bi >> ci >> di >> ei;

        // vector<long> v{ai, bi, ci, di, ei};
        // params.push_back(v);
        if(ai > ma)
        {
            ma = ai;
        }
        if(bi > mb)
        {
            mb = bi;
        }
        if(ci > mc)
        {
            mc = ci;
        }
        if(di > md)
        {
            md = di;
        }
        if(ei > me)
        {
            me = ei;
        }
    }

    vector<long> param{ma, mb, mc, md, me};

    int i = 0;
    long min = ma;
    while(param[i] != NULL)
    {
        if(param[i] < min) min = param[i];
        i++;
    }

}