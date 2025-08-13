#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const int MOD = 1e9 + 7;

ll n;
vector<bool> prime;

bool ok(ll n)
{
    prime.assign(n + 1, true);
    prime[0] = prime[1] = false;

    for (ll i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (ll j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    return prime[n];
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    cout << (ok(n) ? "Is Prime\n" : "Is Composite\n");
}
