string isMinHeap(int A[], int N) {
    // write your code here
    
    for(int i=0;i<N/2;i++){
        if (A[i]>=A[2*i+1]&&A[i]>=A[2*i+2]){
            return "No";
        }
    }
        return "Yes";
    
}


