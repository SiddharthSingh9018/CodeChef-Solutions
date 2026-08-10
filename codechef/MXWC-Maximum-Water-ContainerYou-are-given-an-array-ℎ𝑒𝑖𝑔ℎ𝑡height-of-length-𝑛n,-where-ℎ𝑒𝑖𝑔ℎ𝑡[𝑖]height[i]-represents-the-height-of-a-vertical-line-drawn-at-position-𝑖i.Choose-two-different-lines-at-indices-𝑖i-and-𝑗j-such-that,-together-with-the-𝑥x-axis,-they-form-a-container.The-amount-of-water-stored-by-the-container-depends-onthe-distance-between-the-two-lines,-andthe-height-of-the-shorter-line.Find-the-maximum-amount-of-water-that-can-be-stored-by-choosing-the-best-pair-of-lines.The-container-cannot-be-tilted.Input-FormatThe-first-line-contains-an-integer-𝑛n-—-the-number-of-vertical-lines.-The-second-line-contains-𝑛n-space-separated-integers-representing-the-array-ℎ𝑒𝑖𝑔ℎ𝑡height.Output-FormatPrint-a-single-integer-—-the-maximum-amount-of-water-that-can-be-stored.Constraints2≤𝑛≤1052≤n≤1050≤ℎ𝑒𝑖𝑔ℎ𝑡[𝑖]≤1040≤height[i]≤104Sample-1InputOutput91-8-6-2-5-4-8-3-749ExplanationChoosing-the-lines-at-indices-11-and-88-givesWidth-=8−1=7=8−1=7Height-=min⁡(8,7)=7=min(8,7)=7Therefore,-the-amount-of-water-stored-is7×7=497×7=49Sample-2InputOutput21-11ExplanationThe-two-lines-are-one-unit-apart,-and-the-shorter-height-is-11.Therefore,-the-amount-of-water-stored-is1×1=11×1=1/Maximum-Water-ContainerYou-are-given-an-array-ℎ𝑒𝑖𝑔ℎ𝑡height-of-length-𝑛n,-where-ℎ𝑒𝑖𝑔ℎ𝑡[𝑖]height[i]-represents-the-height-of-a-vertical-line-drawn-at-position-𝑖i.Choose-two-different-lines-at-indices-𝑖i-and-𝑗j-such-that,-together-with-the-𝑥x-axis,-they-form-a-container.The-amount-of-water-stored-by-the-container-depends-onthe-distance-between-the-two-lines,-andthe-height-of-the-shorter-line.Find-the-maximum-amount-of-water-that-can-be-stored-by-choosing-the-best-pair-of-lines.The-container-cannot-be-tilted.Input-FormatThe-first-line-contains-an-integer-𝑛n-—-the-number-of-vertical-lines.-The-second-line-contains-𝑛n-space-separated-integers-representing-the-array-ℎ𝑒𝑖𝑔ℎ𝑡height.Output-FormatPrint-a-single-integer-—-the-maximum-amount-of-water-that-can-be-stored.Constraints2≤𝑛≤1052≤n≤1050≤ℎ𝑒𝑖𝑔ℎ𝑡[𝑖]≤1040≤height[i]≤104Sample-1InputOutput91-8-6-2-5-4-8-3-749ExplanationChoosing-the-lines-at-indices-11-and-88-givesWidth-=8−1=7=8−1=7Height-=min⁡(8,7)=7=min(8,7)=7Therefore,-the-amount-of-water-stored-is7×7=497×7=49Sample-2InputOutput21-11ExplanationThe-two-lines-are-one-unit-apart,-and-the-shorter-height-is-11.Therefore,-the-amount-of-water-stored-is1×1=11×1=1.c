#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> height(n);

    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int l = 0;
    int r = n - 1;
    long long ans = 0;

    while (l < r) {
        int h = min(height[l], height[r]);
        long long area = 1LL * h * (r - l);

        ans = max(ans, area);

        if (height[l] < height[r]) {
            l++;
        } else {
            r--;
        }
    }

    cout << ans;

    return 0;
}