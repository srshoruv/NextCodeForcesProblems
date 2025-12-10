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
    string s, t; cin >> s >> t;

    string tempS = s;
    string tempT = t;

    map<char, int> mS;
    map<char, int> mT;

    fr(i,0,s.size())
    {
    	mS[s[i]]++;
    }

    fr(i,0,t.size())
    {
    	mT[t[i]]++;
    }

    for (auto x : mS)
    {
    	if (mS[x.first] > mT[x.first])
    	{
    		cout << "Impossible" << endl;
    		return;
    	}
    }

    for( auto x : mS)
    {
    	mT[x.first] -= mS[x.first];
    }

    // for( auto x : mT)
    // {
    // 	cout << x.first << mT[x.first] << " ";
    // }

    int i = 0;

    string temp = "";

    while(i < s.size())
    {
    	for (auto x : mT)
    	{
    		if (x.first < s[i] && mT[x.first] > 0)
    		{
    			while(mT[x.first]--)
    			{
    				temp.push_back(x.first);
    			}
    		}
    	}

    	temp.push_back(s[i]);
    	i++;
    }

    for (auto x : mT)
    	{
    		if (mT[x.first] > 0)
    		{
    			while(mT[x.first]--)
    			{
    				temp.push_back(x.first);
    			}
    		}
    	}


    

    cout << temp << endl;

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}