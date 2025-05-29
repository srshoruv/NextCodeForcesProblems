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

    	int num;
    	cin >> num;

    	float root = sqrt(num);
    	if(root == int (root))
    	{
    		cout << int (root/2) << " "<< int (root+1)/2 << endl;
    	}
    	else
    	{
    		cout << -1 << endl;
    	}
    }
    
    return 0;
}