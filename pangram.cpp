#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;
    int size;
    string s;
    cin >> size;
    cin >> s;

    if (size < 24)
    {
    	cout << "NO\n";
    }
    else
    {
    	transform(s.begin(), s.end(), s.begin(), ::tolower);
    	vector<int> ch(26,0);

    	for (int i = 0; i < size; i++)
    	{
    		ch[s[i] - 'a']++;
    	}

    	sort(ch.begin(), ch.end());
    	
    	if (ch[0]==0)
    	{
    		cout << "NO\n";
    	}
    	else
    	{
    		cout << "YES\n";
    	}

    	
    }
    

    return 0;
}