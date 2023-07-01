#include <bits/stdc++.h>
using namespace std;
// #pragma warning(disable : 4996).
#define Shingeki_no_Contest  \
    ios::sync_with_stdio(0); \
    cin.tie(NULL);           \
    cout.tie(NULL);
#define ll long long
#define ull unsigned long long
const ll mod = 1000000007, INF = 2e9;
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
// I think Controlling your mind is the most power thing in the world

// Think twice, Code once
int main()
{
    Shingeki_no_Contest;
    // constrains -> multiple   pow->long long   infinite loop->while(num > 0);
    // freopen("input.txt", "r", stdin);  //freopen("output.txt", "w", stdout);

    ll tests;
    cin >> tests;
    while (tests--)
    {
        ll n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        ll sol1 = 0, sol2 = 0;
        bool flag1 = false, flag2 = false;
        if (s1 == s2)
            flag1 = true;

        for (ll i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
                ++sol1;
        }
        if (sol1 % 2 == 1)
            sol1 += (sol1 - 1);
        else
            sol1 += sol1;

        reverse(s2.begin(), s2.end());
        if (s1 == s2)
            flag2 = true;

        for (ll i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
                ++sol2;
        }
        if (sol2 % 2 == 0)
            sol2 += (sol2 - 1);
        else
            sol2 += sol2;

        ll num = 2;
        if (flag1)
            cout << 0 << "\n";
        else if (flag2)
            cout << 2 << "\n";
        else
            cout << min(sol1, sol2) << "\n";
    }

    return 0;
}
