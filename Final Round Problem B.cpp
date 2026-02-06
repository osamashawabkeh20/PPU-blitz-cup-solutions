/*
      problem link: https://codeforces.com/contest/1732/problem/B
*/

// you have to count the number of equal segements after the first '1'

#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    int n; cin >> n;
    string s; cin >> s;
    string t = s;
    sort(t.begin(), t.end());
    if (s == t) {
        return void (cout << 0 << endl);
    }
    int first = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            first = i + 1;
            break;
        }
    }
    int ans = 0;
    for (int i = first; i < n; i++) {
        if (s[i] != s[i - 1]) {
            ans++;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--)
        Solve();

    cerr << "Done!" << endl;

    return 0;
}
