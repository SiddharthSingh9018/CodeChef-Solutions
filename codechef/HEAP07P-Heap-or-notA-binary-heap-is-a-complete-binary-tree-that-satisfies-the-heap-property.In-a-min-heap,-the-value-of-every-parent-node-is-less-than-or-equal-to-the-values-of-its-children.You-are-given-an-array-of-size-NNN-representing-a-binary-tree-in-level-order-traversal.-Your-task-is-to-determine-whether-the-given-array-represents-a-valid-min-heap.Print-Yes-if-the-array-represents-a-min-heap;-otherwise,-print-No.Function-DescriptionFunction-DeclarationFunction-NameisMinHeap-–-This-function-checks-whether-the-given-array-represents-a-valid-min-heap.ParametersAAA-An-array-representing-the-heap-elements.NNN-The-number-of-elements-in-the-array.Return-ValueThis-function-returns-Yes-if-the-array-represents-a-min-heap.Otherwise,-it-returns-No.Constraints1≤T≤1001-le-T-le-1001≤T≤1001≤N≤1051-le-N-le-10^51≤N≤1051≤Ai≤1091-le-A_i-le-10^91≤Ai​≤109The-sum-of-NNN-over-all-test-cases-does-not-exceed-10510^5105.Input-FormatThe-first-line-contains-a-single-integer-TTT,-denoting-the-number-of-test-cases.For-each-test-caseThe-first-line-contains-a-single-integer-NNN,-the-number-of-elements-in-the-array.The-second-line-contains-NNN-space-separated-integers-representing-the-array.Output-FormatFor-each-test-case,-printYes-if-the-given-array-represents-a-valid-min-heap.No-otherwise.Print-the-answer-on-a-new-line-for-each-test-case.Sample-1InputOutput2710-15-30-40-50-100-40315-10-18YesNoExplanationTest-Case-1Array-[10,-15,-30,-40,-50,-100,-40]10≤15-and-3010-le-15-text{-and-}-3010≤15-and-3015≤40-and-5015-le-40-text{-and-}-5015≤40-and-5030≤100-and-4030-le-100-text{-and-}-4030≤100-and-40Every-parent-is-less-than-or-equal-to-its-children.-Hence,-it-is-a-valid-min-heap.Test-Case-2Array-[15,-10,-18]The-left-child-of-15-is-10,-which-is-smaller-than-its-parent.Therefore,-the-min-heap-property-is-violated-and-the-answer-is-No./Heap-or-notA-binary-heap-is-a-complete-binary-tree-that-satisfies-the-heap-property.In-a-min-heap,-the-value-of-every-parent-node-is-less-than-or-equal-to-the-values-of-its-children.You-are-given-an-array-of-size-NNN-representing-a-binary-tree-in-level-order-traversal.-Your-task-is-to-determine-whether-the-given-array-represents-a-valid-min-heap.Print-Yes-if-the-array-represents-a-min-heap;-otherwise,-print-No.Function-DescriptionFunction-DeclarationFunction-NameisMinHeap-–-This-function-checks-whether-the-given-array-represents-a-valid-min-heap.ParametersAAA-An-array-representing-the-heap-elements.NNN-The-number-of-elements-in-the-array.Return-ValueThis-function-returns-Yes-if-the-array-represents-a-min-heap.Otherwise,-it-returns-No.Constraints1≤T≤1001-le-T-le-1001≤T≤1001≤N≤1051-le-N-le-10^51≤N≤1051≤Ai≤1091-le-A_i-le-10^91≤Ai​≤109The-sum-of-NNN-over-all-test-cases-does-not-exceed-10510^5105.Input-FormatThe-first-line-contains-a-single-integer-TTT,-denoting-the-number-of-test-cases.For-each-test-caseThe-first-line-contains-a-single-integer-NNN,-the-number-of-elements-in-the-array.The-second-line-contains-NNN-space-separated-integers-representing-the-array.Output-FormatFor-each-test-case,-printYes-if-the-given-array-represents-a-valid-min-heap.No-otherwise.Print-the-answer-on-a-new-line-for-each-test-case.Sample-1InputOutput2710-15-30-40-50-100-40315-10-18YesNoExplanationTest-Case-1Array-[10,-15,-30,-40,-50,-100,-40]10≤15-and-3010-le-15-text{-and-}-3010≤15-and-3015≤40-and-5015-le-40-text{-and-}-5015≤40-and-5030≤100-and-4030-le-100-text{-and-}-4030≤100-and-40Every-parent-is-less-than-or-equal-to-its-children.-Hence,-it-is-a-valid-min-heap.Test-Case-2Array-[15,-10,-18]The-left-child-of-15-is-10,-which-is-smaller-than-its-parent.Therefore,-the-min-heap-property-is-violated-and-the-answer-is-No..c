string isMinHeap(int A[], int N) {
    for(int i=0;(i<N/2)-1;i++){
        if (A[2*i+1]<N&&A[i]>=A[2*i+1]||A[i]>=A[2*i+2]){
            return "No";
        }
    }
        return "Yes";
}
