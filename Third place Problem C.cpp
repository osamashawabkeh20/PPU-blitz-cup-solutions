/*
      problem link: https://codeforces.com/contest/1108/problem/C
*/

// we have just 6 possibilities

#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    int n; cin >> n;
    string s; cin >> s;

    auto dif = [&](string a, string b) {
        int ctr = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                ctr++;
            }
        }
        return ctr;
    };

    string ans = "";
    int mn = inf;
    for (char i : {'R', 'G', 'B'}) {
        for (char j : {'R', 'G', 'B'}) {
            if (i == j) continue;
            for (char k : {'R', 'G', 'B'}) {
                if (j == k) continue;
                if (i == k) continue;
                string t = s;
                for (int x = 0; x < n; x++) {
                    if (x % 3 == 0) t[x] = i;
                    if (x % 3 == 1) t[x] = j;
                    if (x % 3 == 2) t[x] = k;
                }
                int d = dif(s, t);
                if (d < mn) {
                    mn = d;
                    ans = t;
                }
            }
        }
    }
    cout << mn << endl << ans << endl;
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
