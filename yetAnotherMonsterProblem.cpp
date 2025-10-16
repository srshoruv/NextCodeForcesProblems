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
    	int c1 = 0, c2 = n, c3 = 0;

    	vector<int> freq(100000001,0);

    	for (int i = 0; i < n; i++)
    	{
    		int x;
    		cin >> freq[x++];
    	}

    	for (int i = 1; i < freq.size(); i++)
    	{
    		if (freq[i] > i)
    		{
    			c1++;
    			n -= freq[i];
    		}
    	}

    	cout << n + c1 << endl;



    	
    }
    
    return 0;
    	
}