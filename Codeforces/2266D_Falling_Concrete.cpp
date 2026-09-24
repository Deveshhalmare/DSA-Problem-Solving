#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
 
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            v[i] = a - i;
        }
        sort(v.begin(), v.end());
 
        int ans = 1;
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (v[i] == v[i - 1] + 1) {
                cnt++;
            }
            else if (v[i] != v[i - 1]) {
                cnt = 1;
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}