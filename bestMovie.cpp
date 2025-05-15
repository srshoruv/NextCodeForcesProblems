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

    	vector<int> vec;

    	for (int i = 0; i < n; i++)
    	{
    		int a , b;
    		cin >> a >> b;

    		if ( a >= 7)
    		{
    			vec.push_back(b);    		
    		}
    		else
    		{
    			vec.push_back(INT_MAX);
    		}

    	}

    	// for (int i = 0; i < vec.size(); i++)
    	// {
    	// 	cout << vec[i] << " ";
    	// }
    	// vec.push_back(INT_MAX);

		int man = vec[0];


    	for (int i = 0; i < vec.size(); i++)
    	{
    		man = min(man,vec[i]);
    	}

    	if (man != INT_MAX)
    	{
    		cout << man << endl;
    	}
    	else
    	{
    		cout << -1 << endl;
    	}
	

    }
    
    return 0;
}