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

int arr[205];
int main() {
	fastio();
	int N;
	cin >> N;
	string s;
	cin >> s;
	for(auto i : s) {
		arr[i]++;
	}
	char ans = '0';
	int max_value = 0;
	for(char i='a'; i<='z'; i++) {
		if(max_value < arr[i]) {
			ans = i;
			max_value = arr[i];
		}
	}
	cout << ans << ' ' << max_value;
}