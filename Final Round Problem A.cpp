/*
      problem link: https://codeforces.com/contest/1345/problem/B
*/

// if you look .. you could find a pattern .. the smallest triangle needs 2 cards .. then needs 5 then 11 then 20 and so on
// so we start with 2 and add in the first time 3 then add 6 then add 9 then 12 and so on
// the number of all possible forms is near to 25000 or 26000
// so we can pre-compute them and then make a binary search while you have enough cards

#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    vector<int> a;
    int cur = 2, add = 5;
    while (cur < 1e9) {
        a.push_back(cur);
        cur += add;
        add += 3;
    }
    int n; cin >> n;
    int ans = 0;
    while (n > 1) {
        int bs = upper_bound(a.begin(), a.end(), n) - a.begin() - 1;
        n -= a[bs];
        ans++;
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
