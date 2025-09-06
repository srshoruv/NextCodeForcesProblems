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
    string s, s1;
    cin >> s >> s1;

    string temp = "qwertyuiopasdfghjkl;zxcvbnm,./";

    if(s=="R")
    {
    	fr(i,0,s1.size())
    	{
    		s1[i] = temp[temp.find(s1[i])-1];
    	}
    }
    else
    {
    	fr(i,0,s1.size())
    	{
    		s1[i] = temp[temp.find(s1[i])+1];
    	}
    }

    cout << s1 << endl;


}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}