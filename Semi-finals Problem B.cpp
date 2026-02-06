/* 
      problem link: https://codeforces.com/contest/902/problem/A
*/
#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    int n, k;
    cin >> n >> k;
    int s = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (s >= a) {
            s = max(s, b);
        }
    }
    cout << (s >= k ? "YES" : "NO") << endl;
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
