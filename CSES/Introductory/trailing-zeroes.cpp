#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
 
using namespace std;
 
void solve(){
	int n; cin >> n;
	int res = 0;
	for(int i = 5; n / i > 0; i *= 5)
		res += n / i;
	cout << res << "\n";
}
 
int main(){
	int t = 1;
	//cin >> t;
	while(-- t >= 0){
		solve();
#ifdef ONPC
		cout << "--------------------\n";
#endif
	}
}
