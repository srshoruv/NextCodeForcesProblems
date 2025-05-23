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

    	int x,y,z;
    	cin >> x >> y >> z;

    	int maxVal = max(x,y);
    	int minVal = min(x,y);

    	if (maxVal <= z || minVal <= z)
    	{
    		cout << "Alice\n";
    	}
    	else if (maxVal >= z && minVal <= z)
    	{
    		cout << "Alice\n";
    	}
    	else
    	{
    		cout << "Bob\n";
    	}

    }
    
    return 0;
}