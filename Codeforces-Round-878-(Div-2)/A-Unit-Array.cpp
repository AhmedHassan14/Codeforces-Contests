#include <iostream>
#include <algorithm>
#include <cmath>
#include <set>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <deque>
#include <utility>
#include <iomanip>
#include <bitset>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
// #include<bits/stdc++.h>
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

    long long tests;
    cin >> tests;
    while (tests--)
    {
        long long n;
        cin >> n;
        ll num = (n + 1) / 2, sol = 0;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        if (mp[1] >= num)
        {
            if (mp[-1] % 2 == 1)
                ++sol;
        }
        else
        {
            if (sol += (num - mp[1]))
                ;
            mp[-1] -= sol;
            if (mp[-1] % 2 == 1)
                ++sol;
        }

        cout << sol << "\n";
    }

    return 0;
}
