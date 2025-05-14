#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    string s;
    int ans = 0;
    cin >> s;

    vector<int> vowFreq(100);
    vector<int> consFreq(100);

    for (int i=0; i < s.length(); i++)
    {
    	if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    	{
    		vowFreq[s[i]-'a']++;
    	}
    	else
    	{
    		consFreq[s[i]-'a']++;
    	}
    }

    ans = *max_element(vowFreq.begin(), vowFreq.end()) + *max_element(consFreq.begin(), consFreq.end());
    cout << ans << endl;

    return 0;
}