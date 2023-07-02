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

    ll tests;
    cin >> tests;
    while (tests--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        long long sz1 = s1.size(), sz2 = s2.size();
        ll mn = abs(sz1 - sz2);
        string s3;
        for (ll i = 0; i < mn; i++)
            s3 += '0';

        if (sz1 < sz2)
            s1 = s3 + s1;
        else if (sz2 < sz1)
            s2 = s3 + s2;
        ll sol = 0;
        bool flag = true;
        for (ll i = 0; i < s1.size(); i++)
        {
            if (flag)
            {
                if (s1[i] == s2[i])
                    continue;
                else
                    flag = false, sol += abs(s1[i] - s2[i]);
            }
            else
                sol += 9;
        }
        cout << sol << "\n";
    }

    return 0;
}
