#include <iostream>
#include <vector>

using namespace std;

int main()
{
    double n, d, h;
    double di, hi, tilt;

    vector< vector<double> > shogai;

    cin >> n >> d >> h;

    for(int i = 0; i < n; i++)
    {
        cin >> di >> hi;

        vector<double> param;
        param.push_back(di);
        param.push_back(hi);

        shogai.push_back(param);
    }

    double min = h / d;

    for(int i = 0; i < n; i++)
    {
        tilt = (h - shogai[i][1]) / (d - shogai[i][0]);
        if(tilt < min)
        {
            min = tilt;
        }
        // cout << tilt << endl;
    }

    // cout << "min: " << min << endl;

    double hn, ans;
    hn = min * d;
    ans = h - hn;

    cout << ans << endl;
}