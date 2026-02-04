/*
      problem link: https://codeforces.com/contest/1040/problem/A
*/
#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == 2 and arr[n - i - 1] == 2) {
            ans += 2 * min(a, b);
        }
        if (arr[i] == 0 and arr[n - i - 1] == 2 or arr[i] == 2 and arr[n - i - 1] == 0) {
            ans += a;
        }
        if (arr[i] == 1 and arr[n - i - 1] == 2 or arr[i] == 2 and arr[n - i - 1] == 1) {
            ans += b;
        }
        if (arr[i] != arr[n - i - 1] and arr[i] != 2 and arr[n - i - 1] != 2) {
            return void (cout << -1 << endl);
        }
    }
    if (n & 1 and arr[n / 2] == 2) ans += min(a, b);
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
