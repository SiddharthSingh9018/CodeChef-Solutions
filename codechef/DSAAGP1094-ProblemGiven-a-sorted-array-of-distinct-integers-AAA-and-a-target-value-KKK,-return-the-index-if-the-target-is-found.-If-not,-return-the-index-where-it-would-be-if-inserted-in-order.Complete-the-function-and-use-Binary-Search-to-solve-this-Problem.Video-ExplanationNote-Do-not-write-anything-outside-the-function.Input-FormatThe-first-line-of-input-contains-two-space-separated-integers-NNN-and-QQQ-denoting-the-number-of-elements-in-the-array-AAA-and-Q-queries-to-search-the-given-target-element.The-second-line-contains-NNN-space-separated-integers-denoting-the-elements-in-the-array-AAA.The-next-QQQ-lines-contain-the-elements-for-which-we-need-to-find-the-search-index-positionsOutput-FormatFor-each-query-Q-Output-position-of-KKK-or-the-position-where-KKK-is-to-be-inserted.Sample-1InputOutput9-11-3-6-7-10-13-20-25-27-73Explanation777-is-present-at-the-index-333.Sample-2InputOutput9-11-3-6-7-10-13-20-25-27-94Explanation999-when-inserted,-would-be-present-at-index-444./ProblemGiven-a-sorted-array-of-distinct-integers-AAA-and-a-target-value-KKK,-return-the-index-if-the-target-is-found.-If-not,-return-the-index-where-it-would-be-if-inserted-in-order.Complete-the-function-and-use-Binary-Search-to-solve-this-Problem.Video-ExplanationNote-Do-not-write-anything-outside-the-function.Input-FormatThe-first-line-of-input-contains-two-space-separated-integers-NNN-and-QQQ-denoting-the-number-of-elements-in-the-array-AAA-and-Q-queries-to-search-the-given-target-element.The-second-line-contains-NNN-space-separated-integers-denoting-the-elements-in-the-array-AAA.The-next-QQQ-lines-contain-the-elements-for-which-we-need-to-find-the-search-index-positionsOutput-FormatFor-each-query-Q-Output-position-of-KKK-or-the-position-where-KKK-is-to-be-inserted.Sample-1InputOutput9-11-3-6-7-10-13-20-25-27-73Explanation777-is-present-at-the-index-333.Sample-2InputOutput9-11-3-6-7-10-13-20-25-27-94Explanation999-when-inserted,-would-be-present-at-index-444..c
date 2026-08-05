int search_insert_position(int arr[], int n, int k){
    int left = 0;
    int right = n;
    
    while(left <= right){
        int middle = (left + right) / 2;
        
        if(arr[middle] == k) {
            return middle;
        }
        else if(arr[middle] > k) {
            right = middle - 1;
        }
        else{
            left = middle + 1;
        }
    }
    return left;
}
