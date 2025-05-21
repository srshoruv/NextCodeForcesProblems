#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int n;
    cin >> n;

    vector<int> vec(n,0);

    int b;
    cin >> b;
    for (int i = 0; i < b; i++)
    {
    	int x;
    	cin >> x;
    	vec[x-1]++;
    }
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
    	int x;
    	cin >> x;
    	vec[x-1]++;
    }

    sort(vec.begin(), vec.end());
    
	if (vec[0] == 0)
	{
		cout << "Oh, my keyboard!\n";
	}
	else
	{
		cout << "I become the guy.\n";
	}

        
    return 0;
}