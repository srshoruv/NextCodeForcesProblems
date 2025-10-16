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

    	int n, k, count = 0;
    	cin >> n >> k;

    	string s;
    	cin >> s;

    	for (int i = 0; i < n/2; i ++)
    	{
    		if (s[i]==s[n-1-i])
    		{
    			count++;
    		}
    	}

    	int rem = count - k;
    	if (count == k || (count > k && rem == 2))
    	{
    		cout << "YES\n";
    	}
    	else
    	{
    		cout << "NO\n";
    	}


    }
    
    return 0;
}