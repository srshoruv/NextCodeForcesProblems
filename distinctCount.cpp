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

    	int n, x;
    	cin >> n >> x;

    	unordered_set<int> s(n);

    	for (int i = 0; i < n; i++)
    	{
    		int y;
    		cin >> y;
    		s.insert(y);
    	}

    	if (s.size()==x)
    	{
    		cout << "Good\n";
    	}
    	else if (s.size() < x)
    	{
    		cout << "Bad\n";
    	}
    	else
    	{
    		cout << "Average\n";
    	}

    }
    
    return 0;
}