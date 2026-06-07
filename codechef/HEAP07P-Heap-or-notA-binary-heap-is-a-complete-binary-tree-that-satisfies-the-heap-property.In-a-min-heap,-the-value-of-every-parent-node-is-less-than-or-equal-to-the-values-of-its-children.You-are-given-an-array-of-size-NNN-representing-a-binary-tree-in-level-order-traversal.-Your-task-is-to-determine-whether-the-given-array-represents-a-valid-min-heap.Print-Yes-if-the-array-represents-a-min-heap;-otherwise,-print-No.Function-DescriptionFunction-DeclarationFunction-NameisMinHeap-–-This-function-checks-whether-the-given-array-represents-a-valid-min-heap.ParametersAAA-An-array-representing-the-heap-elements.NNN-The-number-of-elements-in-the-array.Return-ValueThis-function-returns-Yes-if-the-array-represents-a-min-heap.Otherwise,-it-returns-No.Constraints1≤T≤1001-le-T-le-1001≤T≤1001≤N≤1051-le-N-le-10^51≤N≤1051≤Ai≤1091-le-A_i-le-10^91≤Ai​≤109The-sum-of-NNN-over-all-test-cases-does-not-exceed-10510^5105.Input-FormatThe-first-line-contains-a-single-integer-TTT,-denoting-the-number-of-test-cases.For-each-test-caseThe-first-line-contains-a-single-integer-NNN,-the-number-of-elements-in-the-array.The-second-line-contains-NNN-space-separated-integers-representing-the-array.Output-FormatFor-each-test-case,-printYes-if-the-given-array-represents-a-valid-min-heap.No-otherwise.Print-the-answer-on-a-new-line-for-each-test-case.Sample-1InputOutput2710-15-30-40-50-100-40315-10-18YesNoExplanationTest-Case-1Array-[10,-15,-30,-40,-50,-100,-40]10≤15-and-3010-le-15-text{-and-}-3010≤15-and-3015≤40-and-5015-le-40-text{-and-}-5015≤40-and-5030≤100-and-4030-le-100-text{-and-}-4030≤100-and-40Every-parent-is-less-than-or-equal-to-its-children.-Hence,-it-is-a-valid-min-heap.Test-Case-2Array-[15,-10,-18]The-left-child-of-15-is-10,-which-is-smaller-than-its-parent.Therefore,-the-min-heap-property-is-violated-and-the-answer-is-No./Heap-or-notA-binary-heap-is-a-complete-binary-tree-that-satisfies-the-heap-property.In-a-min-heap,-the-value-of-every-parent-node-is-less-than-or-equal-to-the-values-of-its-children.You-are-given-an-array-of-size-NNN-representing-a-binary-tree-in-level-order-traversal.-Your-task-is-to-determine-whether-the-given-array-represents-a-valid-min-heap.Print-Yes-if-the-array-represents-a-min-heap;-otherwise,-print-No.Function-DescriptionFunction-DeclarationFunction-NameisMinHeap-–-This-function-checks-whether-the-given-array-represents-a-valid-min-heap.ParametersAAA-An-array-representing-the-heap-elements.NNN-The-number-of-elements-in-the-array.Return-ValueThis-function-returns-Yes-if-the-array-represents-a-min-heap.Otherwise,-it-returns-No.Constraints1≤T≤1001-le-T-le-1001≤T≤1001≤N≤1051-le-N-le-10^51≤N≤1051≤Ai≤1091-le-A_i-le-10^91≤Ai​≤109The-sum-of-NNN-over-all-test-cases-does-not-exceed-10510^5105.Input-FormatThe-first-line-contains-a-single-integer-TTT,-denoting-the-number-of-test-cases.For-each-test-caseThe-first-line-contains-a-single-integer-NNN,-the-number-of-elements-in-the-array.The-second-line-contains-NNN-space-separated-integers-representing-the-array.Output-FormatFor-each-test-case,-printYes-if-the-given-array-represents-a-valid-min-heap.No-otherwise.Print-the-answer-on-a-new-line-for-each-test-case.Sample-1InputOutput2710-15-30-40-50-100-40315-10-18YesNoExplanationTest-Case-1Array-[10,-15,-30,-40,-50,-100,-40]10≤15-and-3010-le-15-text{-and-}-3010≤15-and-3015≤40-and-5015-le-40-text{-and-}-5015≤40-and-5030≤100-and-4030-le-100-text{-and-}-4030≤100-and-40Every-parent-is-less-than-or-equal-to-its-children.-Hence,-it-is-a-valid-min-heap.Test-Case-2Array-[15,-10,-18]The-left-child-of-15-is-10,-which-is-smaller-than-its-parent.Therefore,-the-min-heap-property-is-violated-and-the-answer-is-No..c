string isMinHeap(int A[], int N) {
    for(int i=0;(i<N/2)-1;i++){
        if (2*i+1<N&&A[i]>=A[2*i+1]||2*i+2<N&&A[i]>=A[2*i+2]){
            return "No";
        }
    }
        return "Yes";
}
