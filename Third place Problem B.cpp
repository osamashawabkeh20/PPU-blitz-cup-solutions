/*
      problem link: https://codeforces.com/contest/1244/problem/B
*/
#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int left = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            left = i;
        }
    }
    reverse(s.begin(), s.end());
    int right = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            right = i;
        }
    }
    if (left == -1) {
        return void (cout << n << endl);
    }
    int mx = max(left, right);
    cout << 2 * (mx + 1) << endl;
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
