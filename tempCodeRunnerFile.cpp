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
    double X, Y;
    cin >> X >> Y;
    int N;
    cin >> N;
    double ans = 1000000000.0;
    ans = min(ans, 1000.0/Y * X);
    for(int i=0; i<N; i++) {
        double x, y;
        cin >> x >> y;
        ans = min(ans, 1000.0/y * x);
    }
    cout.precision(10);
    cout << fixed;
    cout << ans;
}