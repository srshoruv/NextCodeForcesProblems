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
    int n;
    cin >> n;

    string a,b;

    cin >> a;

    int a1 = 1, a2 = 0;

    --n;
	
    while(n--)
    {	
        string temp;
        cin >> temp;

        if (temp == a) a1++;
        else 
        {
            b = temp;
            a2++;
        }
    }

    if (a1>a2) cout << a << endl;
    else cout << b << endl;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}