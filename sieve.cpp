#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const int MOD = 1e9 + 7;

ll n;

void sieve()
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (auto i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (auto j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }

    vector<ll> res;
    for (ll i = 2; i <= n; i++)
    {
        if (prime[i])
            res.push_back(i);
    }

    for (ll p : res)
        cout << p << ' ';
    cout << '\n';
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    sieve();
}