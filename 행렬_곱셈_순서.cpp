/* Code By Haru_101
GitHub : haruharo101 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF (ll)999999999999
#define mod (ll)1000000007
#define amod (ll)998244353
#define all(v) (v).begin(), (v).end()
#define REP(i, j, n) for(int i = (j); i <= (n); i++)

#define debug if constexpr (local) std::cout
#define endl '\n'

#ifdef ONLINE_JUDGE
constexpr bool local = false;
#else
constexpr bool local = true;
#endif

void fastio() {
	ios::sync_with_stdio(false);
	cin.tie(0);
}

pair<int, int> arr[505];
int dp[505][505];

int main() {
	fastio();
	int N;
	cin >> N;
	for(int i=0; i<N; i++) {
		int x, y;
		cin >> x >> y;
		arr[i] = {x, y};
	}
	for(int i=1; i<N; i++) {
		for(int j=0; j<N-i; j++) {
			dp[i][j] = min(dp[i-1][j] + arr[j].first * arr[j].second * arr[j+1].second, dp[i-1][j+1] + arr[j].first * arr[j+1].first * arr[j+1].second);
			arr[j].second = arr[j+1].second;
		}
	}
	cout << dp[N-1][0];
}