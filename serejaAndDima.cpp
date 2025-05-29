#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int n;
    cin >> n;
    vector<int> vec(n);

    int a = 0, b = 0;

    for (int i = 0; i < n; i++)
    {
    	cin >> vec[i];
    }


    int start = 0, end = n - 1;

    while (start < end)
    {
    	if (vec[start] < vec[end])
    	{
    		a += vec[end];
    		--end;    	
    	}
    	else
    	{
    		a += vec[start];
    		++start;
    	}

    	if (vec[start] < vec[end])
    	{
    		b += vec[end];
    		--end;
    	}
    	else
    	{
    		b += vec[start];
    		++start;
    	}

    	if (start == end)
    	{
    		a += vec[start];
    	}
    }

    cout << a << " " << b << endl;

    
    
    return 0;
}