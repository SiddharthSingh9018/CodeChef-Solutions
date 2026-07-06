#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int K, N;
        cin >> K >> N;

        priority_queue<int, vector<int>, greater<int>> pq; 
        vector<int> ans;
        ans.reserve(N);

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            pq.push(x);

            if ((int)pq.size() > K) {
                pq.pop();
            }

            if ((int)pq.size() < K) {
                ans.push_back(-1);
            } else {
                ans.push_back(pq.top());
            }
        }

        for (int i = 0; i < N; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}