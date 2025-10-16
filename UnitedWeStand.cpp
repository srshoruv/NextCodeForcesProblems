#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

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
    cin >> n;

    in(v,n);

    vi b,c;

    sort(all(v));

    fr(i,0,n)
    {
    	if (v[i]%2)
    	{
    		b.push_back(v[i]);
    	}

    	else
    	{
    		c.push_back(v[i]);
    	}
    }

    if (b.size() == 0)
    {
    	    int temp = c[0];
    		b.push_back(c[0]);
    		c.erase(c.begin());

    		while(c.size())
	    	{
	    		if(c[0]==temp)
	    		{
	    			b.push_back(c[0]);
	    			c.erase(c.begin());
	    		}
	    		else break;
	    	

    	}


    	
    }

    if (c.size()==0)
    {
    	if (b[-1] != 1)
    	{
    		int temp = b[b.size()-1];
    		c.push_back(b[b.size()-1]);
    		b.erase(b.begin()+b.size()-1);
    		while(b.size())
	    	{
	    		if((b[b.size()-1])==temp)
	    		{
	    			c.push_back(b[b.size()-1]);
    				b.erase(b.begin()+b.size()-1);
	    		}
	    		else break;
	    	}
    	}
    	
    }

    if (b.size() == 0 || c.size() == 0)
    {
    	cout << -1 << endl;
    }
    else
    {
    	cout << b.size() << " " << c.size() << endl;

    	fr(i,0,b.size())
    	{
    		cout << b[i] << " ";
    	}

    	cout << endl;

    	fr(i,0,c.size())
    	{
    		cout << c[i] << " ";
    	}

    	cout << endl;
    }

}

int main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}