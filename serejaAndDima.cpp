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

  	in(v,n);
  	int turn = 0;

  	int sereja = 0, dima = 0, i = 0, j = n-1;

  	while (turn < n)
  	{
  		if (turn%2 == 0)
  		{
  			if (v[i] > v[j])
  			{
  				sereja += v[i];
  				i++;
  			}
  			else
  			{
  				sereja += v[j];
  				j--;
  			}
  		}

  		else
  		{
  			if (v[i] > v[j])
  			{
  				dima += v[i];
  				i++;
  			}
  			else
  			{
  				dima += v[j];
  				j--;
  			}
  		}

  		turn++;

  	} 

  	cout << sereja << " " << dima << endl; 
}

int32_t main() 
{
	fastio;

   	solve();

    return 0;
}