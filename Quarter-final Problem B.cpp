/*
      problem link: https://codeforces.com/contest/842/problem/B
*/
#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    int r, d;
    cin >> r >> d;
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x, y, ri;
        cin >> x >> y >> ri;
        double distance = sqrt(x * x + y * y);
        if (distance - ri >= r - d and distance + ri <= r) {
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
    // cin >> t;
    while (t--)
        Solve();

    cerr << "Done!" << endl;

    return 0;
}
