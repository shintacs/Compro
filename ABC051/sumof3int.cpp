#include <iostream>

using namespace std;

int main()
{
    int k, s;
    cin >> k >> s;
    int sum = 0;

    for(int x = 0; x < k+1; x++){
        if(x < s - k*2){
            continue;
        }
        for(int y = 0; y < k+1; y++){
            if(x + y < s - k){
                continue;
            }
            for(int z = 0; z < k+1; z++){
                if(x + y + z == s){
                    sum++;
                }
            }
        }
    }

    cout << sum << endl;
    //TLEあり//解決策を考えよ
}
