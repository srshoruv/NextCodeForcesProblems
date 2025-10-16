#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    map<char, int> m;


    fr(i,0,n)
    {
    	m[s[i]]++;
    }

    vector<pair<int, char>> v;

    for (auto x : m)
    {
    	v.push_back(make_pair(x.second, x.first));
    }

    sort(all(v));

    char ch = v[0].second;
    char ch2 = v[v.size()-1].second;

    auto it = find(all(s), ch) - s.begin();
    auto it2 = find(all(s), ch2) - s.begin();

   s[it] = s[it2];
    
    cout << s << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}