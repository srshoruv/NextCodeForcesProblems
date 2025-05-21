#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int testCase;
    cin >> testCase;

    while (testCase--)
    {

    	int n,m,a,b;
    	cin >> n >> m >> a >> b;

    	if ( m / a == n || m / b == n)
    	{
    		cout << "Yes\n";
    	}
    	else if ( m % (a + b) == 0)
    	{
    		cout << "Yes\n";
    	}
    	else if (m % b == a || m % a == b)
    	{

    		int x = m / max(a,b);
    		m /= max(a,b);
    		int y = m / min(a,b);
    		if (x + y == n)
    		{
    			cout << "Yes\n";
    		}	
    	}
    	else
    	{
    	
    		cout << "No\n";
    		    	
    	}

    }
    
    return 0;
}