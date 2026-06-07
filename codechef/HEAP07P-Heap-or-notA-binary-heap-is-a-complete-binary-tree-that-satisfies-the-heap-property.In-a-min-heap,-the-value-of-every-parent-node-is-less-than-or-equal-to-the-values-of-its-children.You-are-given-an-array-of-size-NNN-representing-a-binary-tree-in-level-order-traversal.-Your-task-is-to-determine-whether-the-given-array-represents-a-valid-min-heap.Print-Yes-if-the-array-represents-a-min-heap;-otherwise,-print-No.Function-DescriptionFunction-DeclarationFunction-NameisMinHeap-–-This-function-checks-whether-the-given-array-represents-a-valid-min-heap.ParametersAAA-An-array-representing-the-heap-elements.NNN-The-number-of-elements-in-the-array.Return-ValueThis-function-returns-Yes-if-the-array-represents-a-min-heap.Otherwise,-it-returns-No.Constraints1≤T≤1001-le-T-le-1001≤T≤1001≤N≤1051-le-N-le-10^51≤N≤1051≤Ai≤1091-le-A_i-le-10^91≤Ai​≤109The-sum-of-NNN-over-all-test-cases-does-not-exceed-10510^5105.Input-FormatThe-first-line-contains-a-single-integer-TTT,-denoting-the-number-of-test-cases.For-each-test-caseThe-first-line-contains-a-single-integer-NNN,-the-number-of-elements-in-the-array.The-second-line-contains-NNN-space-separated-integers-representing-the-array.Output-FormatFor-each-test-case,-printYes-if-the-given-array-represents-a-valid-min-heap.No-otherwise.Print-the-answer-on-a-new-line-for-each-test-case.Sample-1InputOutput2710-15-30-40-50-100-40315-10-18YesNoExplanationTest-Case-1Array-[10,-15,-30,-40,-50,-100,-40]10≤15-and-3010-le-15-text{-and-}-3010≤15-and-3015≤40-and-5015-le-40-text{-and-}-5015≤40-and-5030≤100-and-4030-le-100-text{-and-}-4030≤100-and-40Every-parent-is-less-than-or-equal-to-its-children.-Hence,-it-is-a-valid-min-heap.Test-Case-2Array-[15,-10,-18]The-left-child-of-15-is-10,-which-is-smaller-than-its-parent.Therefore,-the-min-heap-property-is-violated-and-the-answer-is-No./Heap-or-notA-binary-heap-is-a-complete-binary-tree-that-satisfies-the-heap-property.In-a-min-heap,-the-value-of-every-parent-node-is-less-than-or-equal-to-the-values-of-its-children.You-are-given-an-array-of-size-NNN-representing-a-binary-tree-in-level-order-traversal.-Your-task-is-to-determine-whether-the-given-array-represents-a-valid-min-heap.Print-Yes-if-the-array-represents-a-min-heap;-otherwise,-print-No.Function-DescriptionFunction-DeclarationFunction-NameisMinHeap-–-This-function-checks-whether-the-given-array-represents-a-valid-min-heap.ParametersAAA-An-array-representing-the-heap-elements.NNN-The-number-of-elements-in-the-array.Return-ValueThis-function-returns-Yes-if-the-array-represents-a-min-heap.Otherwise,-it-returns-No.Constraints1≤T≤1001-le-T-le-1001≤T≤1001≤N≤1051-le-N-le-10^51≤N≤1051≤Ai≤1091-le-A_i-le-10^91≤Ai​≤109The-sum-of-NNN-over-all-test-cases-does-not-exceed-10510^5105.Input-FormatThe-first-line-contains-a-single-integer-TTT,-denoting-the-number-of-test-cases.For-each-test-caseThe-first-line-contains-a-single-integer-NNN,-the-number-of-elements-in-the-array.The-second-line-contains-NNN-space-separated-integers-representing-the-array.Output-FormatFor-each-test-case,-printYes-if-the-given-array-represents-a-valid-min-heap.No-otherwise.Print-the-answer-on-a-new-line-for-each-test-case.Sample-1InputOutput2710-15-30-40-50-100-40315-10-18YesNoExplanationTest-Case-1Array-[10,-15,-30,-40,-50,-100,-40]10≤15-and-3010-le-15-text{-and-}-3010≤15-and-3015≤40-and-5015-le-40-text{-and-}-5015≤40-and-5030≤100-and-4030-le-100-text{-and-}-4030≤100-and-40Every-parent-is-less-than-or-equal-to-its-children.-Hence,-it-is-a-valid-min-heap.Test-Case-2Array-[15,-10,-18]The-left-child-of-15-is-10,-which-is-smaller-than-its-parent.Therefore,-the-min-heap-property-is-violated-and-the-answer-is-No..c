static String isMinHeap(int[] A, int N) {
    boolean poss=true;
    int level=0;
    int start=0;
    while(start<N){
        int currLev=(int) Math.pow(2,level);
        for(int i=start;i<=Math.min(start+currLev,N);i++){
            int l=2*i+1;
            int r=2*i+2;
            if(l<N && A[i]>A[l]) poss=false;
            if(r<N && A[i]>A[r]) poss=false;
        }
        start+=currLev;
        level++;
    }
    return poss?"Yes":"No";
}
