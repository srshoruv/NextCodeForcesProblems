#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    string s;
    cin >> s;

    int cnt = 0;

    fr(i,0,s.length())
    {
        if (s[i]=='#')
        {
            cout << i + 1;
            cnt++;

            if (cnt == 1)
            {
                cout <<",";
            }
            else if (cnt == 2)
            {
                cout << endl;
                cnt = 0;
            }
        }
    }
}

int32_t main() 
{
    fastio;

    solve();
    return 0;
}