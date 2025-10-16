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
    string s;
    cin >> s;

    char last = s[s.size()-1];
    int n = s.size();

    fr(i,0,n)
    {
    	if (s[i] != last)
    	{
    		cout << 0 << endl;
    		return;
    	}
    }

    int count = 0;

    vi v;

    fr(i,0,n)
    {
    	string num = s.substr(0,i+1);
    	int nu = stoll(num);
    	
    	int power = nu * pow(10,n-i-1);
    	string sum = to_string(power+nu);

    	cout << power << " " <<  nu << endl;

    	if(sum == s)
    	{
    		count++;
    		v.push_back(nu);
    	}
    }

    cout << count << endl;
    sort(all(v));

    fr(i,0,v.size())
    {
    	cout << v[i] << " ";
    }
    cout << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}