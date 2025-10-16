#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int r, x;
    cin >> r >> x;

    if (r >= 1600 && r <= 2999)
    {
    	if (x == 1)
    	{
    		cout << "Yes\n";
    	}
    	else if ( x == 2 && r <= 2399)
    	{
    		cout << "Yes\n";
    	}
    	else
    	{
    		cout << "No\n";
    	}
    }
    else if ( r  >= 1200 && r <= 2399)
    {
    	if (x == 2)
    	{
    		cout << "Yes\n";
    	}
    	else if ( x == 1 && r >= 1600)
    	{
    		cout << "Yes\n";
    	}
    	else
    	{
    		cout << "No\n";
    	}
    }

    else
    {
    	cout << "No\n";
    }
    

    return 0;
}