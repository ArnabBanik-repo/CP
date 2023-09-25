#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

vector<pair<int, int>> res;

void toh(int n, int a, int b, int c){
	if(n == 1){
		res.emplace_back(make_pair(a, c));
		return;
	}	
	toh(n - 1, a, c, b);
	res.emplace_back(make_pair(a, c));
	toh(n - 1, b, a, c);
}

void solve(){
	int n; cin >> n;
	toh(n, 1, 2, 3);
	cout << res.size() << "\n";
	for(auto i : res)
		cout << i.first << " " << i.second << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
#ifdef ONPC
	freopen("inputf.in", "r", stdin);
	//freopen("outputf.in", "w", stdout);
#endif
	int t = 1;
	//cin >> t;
	while(-- t >= 0){
		solve();
#ifdef ONPC
		cout << "----------------------\n";
#endif
	}
}
