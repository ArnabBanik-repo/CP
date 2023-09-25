#include <iostream>
#define ll long long
 
using namespace std;
 
int main() {
    string s; cin >> s;
    int m = 0, c = 1, l = s.length();
    for(int i = 1; i < l; ++ i){
        if(s[i] == s[i - 1]) ++ c;
        else {
            m = max(m, c);
            c = 1;
        }
    }
    cout << max(m, c) << "\n";
}
