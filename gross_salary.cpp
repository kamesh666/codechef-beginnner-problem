#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--) {
        long double gs,bs,hra,da;
        cin >> bs;

        if(bs < 1500) {
            hra = (0.1)*bs;
            da = (0.9)*bs;
        }
        else 
        {
            hra = 500;
            da = (0.98) * bs;
        }

        gs = bs+hra+da;

        cout << fixed << setprecision(6) << gs << endl;
        
    }
    return 0;
}
