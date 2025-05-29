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

    	int n;
    	cin >> n;
    	int evenSum = 0, oddSum = 0;

    	for (int i = 0; i < n; i++)
    	{
    		int x;
    		cin >> x;
    		if (i%2 == 0)
    		{
    			oddSum += x;
    		}
    		else
    		{
    			evenSum += x;
    		}
    	}

    	cout << max(oddSum,evenSum) << endl;

    }
    
    return 0;
}