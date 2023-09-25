#include <iostream>
#define ll long long
 
using namespace std;
 
int main() {
    int n; cin >> n;
    int a[n - 1]; 
    ll sum = 0;
    for(int i = 0; i < n - 1; ++ i) {
        cin >> a[i];
        sum += a[i];
    }
    cout << (1ll * n * (n + 1)) / 2 - sum << "\n";
}
