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
    int t; cin >> t;
    set<int> s;

    int j = 1;
    int count = 0;

    vi va;
    vi vb;

    while(t--)
    {
    	int a,b;
    	cin >> a >> b;

    	va.push_back(a);
    	vb.push_back(b);

    	if (a==0 && b ==0) s.insert(j);
    	j++;
    }

    // fr(i,0,(int)va.size()-1)
    // {
    // 	if (va[i+1] < va[i])
    // 	{
    // 		swap(va[i+1],va[i]);
    // 		swap(vb[i+1],vb[i]);
    // 	}
    // }

    fr(i,0,(int)va.size())
    {
    	if (va[i] == 0 && vb[i] == 0)
    	{
    		s.insert(i+1);
    		count++;
    	}

    	else if (s.find(va[i]) != s.end() || s.find(vb[i]) != s.end() || s.find(i+1) != s.end())
    	{
    		s.insert(i+1);
    		count++;
    	}
    }

    cout << count << endl;
}

int32_t main() 
{
    fastio;

    solve();

    return 0;
}