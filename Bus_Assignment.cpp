/* Code By [ Haru_101 ]
GitHub : [ haruharo101 ] */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define INF (ll)9999999999999

#define debug if constexpr (local) std::cout
#define endl '\n'

#ifdef ONLINE_JUDGE
constexpr bool local = false;
#else
constexpr bool local = true;
#endif

void fastio() {
    ios::sync_with_stdio(false); cin.tie(0);
}

int main() {
    fastio();
    int N;
    cin >> N;
    ll _max = -INF;
    ll now = 0;
    for(int i=0; i<N; i++) {
        ll a, b;
        cin >> a >> b;
        now += b-a;
        _max = max(_max, now);
    }
    cout << _max;
}