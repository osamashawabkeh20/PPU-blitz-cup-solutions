/*
       problem link: https://codeforces.com/contest/867/problem/A
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
    int stof = 0, ftos = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'F' and s[i + 1] == 'S') {
            ftos++;
        }
        else if (s[i] == 'S' and s[i + 1] == 'F') {
            stof++;
        }
    }
    cout << (stof > ftos ? "YES" : "NO") << endl;
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
