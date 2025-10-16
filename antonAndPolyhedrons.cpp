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
    int x;
    cin >> x;

    int total = 0;

    while(x--)
    {
    	string s;
    	cin >> s;

    	if (s == "Tetrahedron") total += 4;
    	else if (s == "Cube") total += 6;
    	else if (s == "Octahedron") total += 8;
    	else if (s == "Dodecahedron") total += 12;
    	else if (s == "Icosahedron") total += 20;
    }

    cout << total << endl;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}