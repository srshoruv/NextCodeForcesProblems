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
   string s;
   cin >> n >> s;

   int first, last;

   fr(i,0,n)
   {
   	if(s[i]=='B')
   	{
   		first = i;
   		break;
   	}
   } 

   for(int i = n-1; i >= 0; i--)
   {
   	if(s[i]=='B')
   	{
   		last = i;
   		break;
   	}
   }

   if (first == last) cout << 1 << endl;
   else cout << last-first+1 << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}