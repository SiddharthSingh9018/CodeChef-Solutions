bool canReduce(int N, vector<int>& arr) {

    sort(arr.begin(), arr.end());

    for(int i = 1; i < N; i++) {
        if(arr[i] - arr[i - 1] > 1) {
            return false;
        }
    }

    return true;
}
