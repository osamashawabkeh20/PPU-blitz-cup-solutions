/*
      problem link: https://codeforces.com/contest/1411/problem/B
*/ 

// hint: in the worst case .. the number should be divisible by all numbers from 1 to 9
// this means the number should also be divisible by the lcm of all numbers from 1 to 9 which equlas to 2520
// so we should just brute force to find the needed number .. the loop won't stay more than 2520 times

#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    int n; cin >> n;
    string s = to_string(n);
    bool fair = true;
    for (int i = 0; i < size(s); i++) {
        if ((s[i] - '0') and n % (s[i] - '0')) {
            fair = false;
        }
    }
    if (fair) {
        return void (cout << n << endl);
    }
    while (!fair) {
        n++;
        fair = true;
        s = to_string(n);
        for (int i = 0; i < size(s); i++) {
            if ((s[i] - '0') and n % (s[i] - '0')) {
                fair = false;
            }
        }
    }
    cout << n << endl;
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
