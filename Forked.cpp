#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int a,b, xK, yK, xQ, yQ; cin >> a >> b >> xK >> yK >> xQ >> yQ;

    int count = 0;

    int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

    set<pair<int,int>> king_hits, queen_hits;

    for(int j = 0; j < 4; j++)
    {
        king_hits.insert({xK+dx[j]*a, yK+dy[j]*b});
        king_hits.insert({xK+dx[j]*b, yK+dy[j]*a});

        queen_hits.insert({xQ+dx[j]*a, yQ+dy[j]*b});
        queen_hits.insert({xQ+dx[j]*b, yQ+dy[j]*a});
    }

        int ans = 0;
        for(auto position : king_hits)
            if(queen_hits.find(position) != queen_hits.end())
                count++;
    

    cout << count << endl;

    

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}